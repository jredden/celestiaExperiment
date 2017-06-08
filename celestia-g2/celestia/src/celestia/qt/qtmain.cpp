/***************************************************************************
                          qtmain.cpp  -  description
                             -------------------
    begin                : Tue Jul 16 22:28:19 CEST 2002
    copyright            : (C) 2002 by Christophe Teyssier
    email                : chris@teyssier.org
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QApplication>
#include <QSplashScreen>
#include <QDesktopServices>
#include <QPixmap>
#include <QBitmap>
#include <vector>
#include "qtappwin.h"
#include <qtextcodec.h>
#include "plog/Log.h"

using namespace std;


static const char *description = "Celestia";

// Command line options
static bool startFullscreen = false;
static bool runOnce = false;
static QString startURL;
static QString startDirectory;
static QString startScript;
static QStringList extrasDirectories;
static QString configFileName;
static bool useAlternateConfigFile = false;
static bool skipSplashScreen = false;

static bool ParseCommandLine();

enum // Define log instances. Default is 0 and is omitted from this enum.
{
    SecondLog = 1,
	ThirdLog = 2,
	ConfigLog = 3,
	TextureLog = 4,
	SolarSystemLog = 5,
	RenderLog = 6,
	ParseLog = 7,
	ImageLog = 8,
	StarOctreeLog = 9
};

int main(int argc, char *argv[])
{
	plog::init(plog::debug, "genericLog.txt");
	LOGD << "Hello log!";
	plog::init<SecondLog>(plog::debug, "celestialcore.txt"); // Initialize the 2nd logger instance.
	LOG_DEBUG_(SecondLog) << "celestialcore log!";
	plog::init<ThirdLog>(plog::debug, "celx.txt"); // Initialize the 3rd logger instance.
	LOG_DEBUG_(ThirdLog) << "celx log!";
	plog::init<ConfigLog>(plog::debug, "config.txt"); // Initialize the 4th logger instance.
	LOG_DEBUG_(ConfigLog) << "config log!";
	plog::init<TextureLog>(plog::debug, "texture.txt"); // Initialize the 5th logger instance.
	LOG_DEBUG_(ConfigLog) << "texture log!";
	plog::init<SolarSystemLog>(plog::debug, "/dev/null"); // Initialize the 6th logger instance.
	LOG_DEBUG_(SolarSystemLog) << "solarsys log!";
//	plog::init<SolarSysLog>(plog::debug, "solarsys.txt"); // Initialize the 6th logger instance.
//	LOG_DEBUG_(SolarSysLog) << "solarsys log!";
	plog::init<RenderLog>(plog::debug, "render.txt"); // Initialize the 7th logger instance.
	LOG_DEBUG_(RenderLog) << "render log!";
	plog::init<ParseLog>(plog::debug, "/dev/null"); // Initialize the 8th logger instance.
	LOG_DEBUG_(ParseLog) << "parse log!";
//	plog::init<ParseLog>(plog::debug, "parse.txt"); // Initialize the 8th logger instance.
//	LOG_DEBUG_(ParseLog) << "parse log!";
	plog::init<ImageLog>(plog::debug, "/dev/null"); // Initialize the 9th logger instance.
	LOG_DEBUG_(ImageLog) << "image log!";
//	plog::init<ImageLog>(plog::debug, "image.txt"); // Initialize the 9th logger instance.
//	LOG_DEBUG_(ImageLog) << "image log!";
	plog::init<StarOctreeLog>(plog::debug, "/dev/null"); // Initialize the 10th logger instance.
	LOG_DEBUG_(RenderLog) << "staroctree log!";
//	plog::init<StarOctreeLog>(plog::debug, "staroctree.txt"); // Initialize the 10th logger instance.
//	LOG_DEBUG_(RenderLog) << "staroctree log!";

    QApplication app(argc, argv);

    Q_INIT_RESOURCE(icons);

    QCoreApplication::setOrganizationName("Celestia Development Team");
    QCoreApplication::setApplicationName("Celestia");

    ParseCommandLine();

    QPixmap pixmap("splash.png");
    QSplashScreen splash(pixmap);
    splash.setMask(pixmap.mask());

    // Disabled for now until issues with pixmap alpha channel
    // are resolved
    //splash.show();

    // Gettext integration
    setlocale(LC_ALL, ""); 
    setlocale(LC_NUMERIC, "C"); 
    bindtextdomain("celestia","locale");
    bind_textdomain_codeset("celestia", "UTF-8"); 
    bindtextdomain("celestia_constellations","locale");
    bind_textdomain_codeset("celestia_constellations", "UTF-8"); 
    textdomain("celestia");

    // By default, QString converts the const char * data into Unicode Latin-1 characters.
    // We need to change this to UTF-8 for i18n purpose.
    // QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    // not available in QT5 but QT5 makes UTF-8 default

    CelestiaAppWindow window;

    // Connect the splash screen to the main window so that it
    // can receive progress notifications as Celestia files required
    // for startup are loaded.
    QObject::connect(&window, SIGNAL(progressUpdate(const QString&, int, const QColor&)),
                     &splash, SLOT(showMessage(const QString&, int, const QColor&)));

    window.init(configFileName, extrasDirectories);
    window.show();

    splash.finish(&window);

    // Set the main window to be the cel url handler
    QDesktopServices::setUrlHandler("cel", &window, "handleCelUrl");

    return app.exec();
}



static void CommandLineError(const char*)
{
}



bool ParseCommandLine()
{
    QStringList args = QCoreApplication::arguments();

    int i = 1;

    while (i < args.size())
    {
        bool isLastArg = (i == args.size() - 1);
#if 0
        if (strcmp(argv[i], "--verbose") == 0)
        {
            SetDebugVerbosity(1);
        }
        else
#endif
        if (args.at(i) == "--fullscreen")
        {
            startFullscreen = true;
        }
        else if (args.at(i) == "--once")
        {
            runOnce = true;
        }
        else if (args.at(i) == "--dir")
        {
            if (isLastArg)
            {
                CommandLineError("Directory expected after --dir");
                return false;
            }
            i++;
            startDirectory = args.at(i);
        }
        else if (args.at(i) == "--conf")
        {
            if (isLastArg)
            {
                CommandLineError("Configuration file name expected after --conf");
                return false;
            }
            i++;
            configFileName = args.at(i);
            useAlternateConfigFile = true;
        }
        else if (args.at(i) == "--extrasdir")
        {
            if (isLastArg)
            {
                CommandLineError("Directory expected after --extrasdir");
                return false;
            }
            i++;
            extrasDirectories.push_back(args.at(i));
        }
        else if (args.at(i) == "-u" || args.at(i) == "--url")
        {
            if (isLastArg)
            {
                CommandLineError("URL expected after --url");
                return false;
            }
            i++;
            startURL = args.at(i);
        }
        else if (args.at(i) == "-s" || args.at(i) == "--nosplash")
        {
            skipSplashScreen = true;
        }
        else
        {
            char* buf = new char[args.at(i).length() + 256];
            sprintf(buf, "Invalid command line option '%s'", args.at(i).toUtf8().data());
            CommandLineError(buf);
            delete[] buf;
            return false;
        }

        i++;
    }

    return true;
}
