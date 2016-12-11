/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_preferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *objectsTab;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *objectsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *starsCheck;
    QCheckBox *planetsCheck;
    QCheckBox *galaxiesCheck;
    QCheckBox *nebulaeCheck;
    QCheckBox *openClustersCheck;
    QCheckBox *globularClustersCheck;
    QSpacerItem *verticalSpacer;
    QGroupBox *featuresGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *atmospheresCheck;
    QCheckBox *cloudsCheck;
    QCheckBox *cloudShadowsCheck;
    QCheckBox *eclipseShadowsCheck;
    QCheckBox *ringShadowsCheck;
    QCheckBox *nightsideLightsCheck;
    QCheckBox *cometTailsCheck;
    QCheckBox *limitOfKnowledgeCheck;
    QSpacerItem *verticalSpacer_2;
    QWidget *guidesTab;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *orbitsGroupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *orbitsCheck;
    QCheckBox *partialTrajectoriesCheck;
    QSpacerItem *verticalSpacer_14;
    QCheckBox *starOrbitsCheck;
    QCheckBox *planetOrbitsCheck;
    QCheckBox *dwarfPlanetOrbitsCheck;
    QCheckBox *moonOrbitsCheck;
    QCheckBox *minorMoonOrbitsCheck;
    QCheckBox *asteroidOrbitsCheck;
    QCheckBox *cometOrbitsCheck;
    QCheckBox *spacecraftOrbitsCheck;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *gridsGroupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *equatorialGridCheck;
    QCheckBox *eclipticGridCheck;
    QCheckBox *galacticGridCheck;
    QCheckBox *horizontalGridCheck;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *constellationsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *diagramsCheck;
    QCheckBox *boundariesCheck;
    QCheckBox *latinNamesCheck;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *miscellaneousGroupBox;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *markersCheck;
    QCheckBox *eclipticLineCheck;
    QSpacerItem *verticalSpacer_7;
    QWidget *labelsTab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *labelsGroupBox;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *starLabelsCheck;
    QCheckBox *planetLabelsCheck;
    QCheckBox *dwarfPlanetLabelsCheck;
    QCheckBox *moonLabelsCheck;
    QCheckBox *minorMoonLabelsCheck;
    QCheckBox *asteroidLabelsCheck;
    QCheckBox *cometLabelsCheck;
    QCheckBox *spacecraftLabelsCheck;
    QCheckBox *galaxyLabelsCheck;
    QCheckBox *nebulaLabelsCheck;
    QCheckBox *openClusterLabelsCheck;
    QCheckBox *globularClusterLabelsCheck;
    QCheckBox *constellationLabelsCheck;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *locationsGroupBox;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *locationsCheck;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QCheckBox *citiesCheck;
    QCheckBox *landingSitesCheck;
    QCheckBox *volcanoesCheck;
    QCheckBox *observatoriesCheck;
    QCheckBox *cratersCheck;
    QCheckBox *montesCheck;
    QCheckBox *terraeCheck;
    QCheckBox *vallesCheck;
    QCheckBox *mariaCheck;
    QCheckBox *otherLocationsCheck;
    QSpacerItem *verticalSpacer_11;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSlider *featureSizeSlider;
    QLineEdit *featureSizeEdit;
    QSpacerItem *verticalSpacer_8;
    QWidget *renderTab;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *textureResolutionGroupBox;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *lowResolutionButton;
    QRadioButton *mediumResolutionButton;
    QRadioButton *highResolutionButton;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *ambientLightGroupBox;
    QVBoxLayout *verticalLayout_15;
    QSlider *ambientLightSlider;
    QCheckBox *tintedIlluminationCheck;
    QSpacerItem *verticalSpacer_17;
    QGroupBox *renderPathGroupBox;
    QVBoxLayout *verticalLayout_13;
    QComboBox *renderPathBox;
    QCheckBox *antialiasLinesCheck;
    QSpacerItem *verticalSpacer_13;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *starStyleGroupBox;
    QVBoxLayout *verticalLayout_17;
    QRadioButton *pointStarsButton;
    QRadioButton *fuzzyPointStarsButton;
    QRadioButton *scaledDiscsButton;
    QSpacerItem *verticalSpacer_15;
    QCheckBox *autoMagnitudeCheck;
    QSpacerItem *verticalSpacer_16;
    QGroupBox *starColorGroupBox;
    QVBoxLayout *verticalLayout_19;
    QComboBox *starColorBox;
    QSpacerItem *verticalSpacer_12;
    QWidget *timeTab;
    QFormLayout *formLayout;
    QLabel *label_3;
    QComboBox *dateFormatBox;

    void setupUi(QDialog *preferencesDialog)
    {
        if (preferencesDialog->objectName().isEmpty())
            preferencesDialog->setObjectName(QString::fromUtf8("preferencesDialog"));
        preferencesDialog->resize(456, 409);
        preferencesDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(preferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(preferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        objectsTab = new QWidget();
        objectsTab->setObjectName(QString::fromUtf8("objectsTab"));
        horizontalLayout_3 = new QHBoxLayout(objectsTab);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        objectsGroupBox = new QGroupBox(objectsTab);
        objectsGroupBox->setObjectName(QString::fromUtf8("objectsGroupBox"));
        objectsGroupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(objectsGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        starsCheck = new QCheckBox(objectsGroupBox);
        starsCheck->setObjectName(QString::fromUtf8("starsCheck"));

        verticalLayout_2->addWidget(starsCheck);

        planetsCheck = new QCheckBox(objectsGroupBox);
        planetsCheck->setObjectName(QString::fromUtf8("planetsCheck"));

        verticalLayout_2->addWidget(planetsCheck);

        galaxiesCheck = new QCheckBox(objectsGroupBox);
        galaxiesCheck->setObjectName(QString::fromUtf8("galaxiesCheck"));

        verticalLayout_2->addWidget(galaxiesCheck);

        nebulaeCheck = new QCheckBox(objectsGroupBox);
        nebulaeCheck->setObjectName(QString::fromUtf8("nebulaeCheck"));

        verticalLayout_2->addWidget(nebulaeCheck);

        openClustersCheck = new QCheckBox(objectsGroupBox);
        openClustersCheck->setObjectName(QString::fromUtf8("openClustersCheck"));

        verticalLayout_2->addWidget(openClustersCheck);

        globularClustersCheck = new QCheckBox(objectsGroupBox);
        globularClustersCheck->setObjectName(QString::fromUtf8("globularClustersCheck"));

        verticalLayout_2->addWidget(globularClustersCheck);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(objectsGroupBox);

        featuresGroupBox = new QGroupBox(objectsTab);
        featuresGroupBox->setObjectName(QString::fromUtf8("featuresGroupBox"));
        verticalLayout_3 = new QVBoxLayout(featuresGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        atmospheresCheck = new QCheckBox(featuresGroupBox);
        atmospheresCheck->setObjectName(QString::fromUtf8("atmospheresCheck"));

        verticalLayout_3->addWidget(atmospheresCheck);

        cloudsCheck = new QCheckBox(featuresGroupBox);
        cloudsCheck->setObjectName(QString::fromUtf8("cloudsCheck"));

        verticalLayout_3->addWidget(cloudsCheck);

        cloudShadowsCheck = new QCheckBox(featuresGroupBox);
        cloudShadowsCheck->setObjectName(QString::fromUtf8("cloudShadowsCheck"));

        verticalLayout_3->addWidget(cloudShadowsCheck);

        eclipseShadowsCheck = new QCheckBox(featuresGroupBox);
        eclipseShadowsCheck->setObjectName(QString::fromUtf8("eclipseShadowsCheck"));

        verticalLayout_3->addWidget(eclipseShadowsCheck);

        ringShadowsCheck = new QCheckBox(featuresGroupBox);
        ringShadowsCheck->setObjectName(QString::fromUtf8("ringShadowsCheck"));

        verticalLayout_3->addWidget(ringShadowsCheck);

        nightsideLightsCheck = new QCheckBox(featuresGroupBox);
        nightsideLightsCheck->setObjectName(QString::fromUtf8("nightsideLightsCheck"));

        verticalLayout_3->addWidget(nightsideLightsCheck);

        cometTailsCheck = new QCheckBox(featuresGroupBox);
        cometTailsCheck->setObjectName(QString::fromUtf8("cometTailsCheck"));

        verticalLayout_3->addWidget(cometTailsCheck);

        limitOfKnowledgeCheck = new QCheckBox(featuresGroupBox);
        limitOfKnowledgeCheck->setObjectName(QString::fromUtf8("limitOfKnowledgeCheck"));

        verticalLayout_3->addWidget(limitOfKnowledgeCheck);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(featuresGroupBox);

        tabWidget->addTab(objectsTab, QString());
        guidesTab = new QWidget();
        guidesTab->setObjectName(QString::fromUtf8("guidesTab"));
        horizontalLayout_2 = new QHBoxLayout(guidesTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        orbitsGroupBox = new QGroupBox(guidesTab);
        orbitsGroupBox->setObjectName(QString::fromUtf8("orbitsGroupBox"));
        verticalLayout_4 = new QVBoxLayout(orbitsGroupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        orbitsCheck = new QCheckBox(orbitsGroupBox);
        orbitsCheck->setObjectName(QString::fromUtf8("orbitsCheck"));

        verticalLayout_4->addWidget(orbitsCheck);

        partialTrajectoriesCheck = new QCheckBox(orbitsGroupBox);
        partialTrajectoriesCheck->setObjectName(QString::fromUtf8("partialTrajectoriesCheck"));

        verticalLayout_4->addWidget(partialTrajectoriesCheck);

        verticalSpacer_14 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_14);

        starOrbitsCheck = new QCheckBox(orbitsGroupBox);
        starOrbitsCheck->setObjectName(QString::fromUtf8("starOrbitsCheck"));

        verticalLayout_4->addWidget(starOrbitsCheck);

        planetOrbitsCheck = new QCheckBox(orbitsGroupBox);
        planetOrbitsCheck->setObjectName(QString::fromUtf8("planetOrbitsCheck"));

        verticalLayout_4->addWidget(planetOrbitsCheck);

        dwarfPlanetOrbitsCheck = new QCheckBox(orbitsGroupBox);
        dwarfPlanetOrbitsCheck->setObjectName(QString::fromUtf8("dwarfPlanetOrbitsCheck"));

        verticalLayout_4->addWidget(dwarfPlanetOrbitsCheck);

        moonOrbitsCheck = new QCheckBox(orbitsGroupBox);
        moonOrbitsCheck->setObjectName(QString::fromUtf8("moonOrbitsCheck"));

        verticalLayout_4->addWidget(moonOrbitsCheck);

        minorMoonOrbitsCheck = new QCheckBox(orbitsGroupBox);
        minorMoonOrbitsCheck->setObjectName(QString::fromUtf8("minorMoonOrbitsCheck"));

        verticalLayout_4->addWidget(minorMoonOrbitsCheck);

        asteroidOrbitsCheck = new QCheckBox(orbitsGroupBox);
        asteroidOrbitsCheck->setObjectName(QString::fromUtf8("asteroidOrbitsCheck"));

        verticalLayout_4->addWidget(asteroidOrbitsCheck);

        cometOrbitsCheck = new QCheckBox(orbitsGroupBox);
        cometOrbitsCheck->setObjectName(QString::fromUtf8("cometOrbitsCheck"));

        verticalLayout_4->addWidget(cometOrbitsCheck);

        spacecraftOrbitsCheck = new QCheckBox(orbitsGroupBox);
        spacecraftOrbitsCheck->setObjectName(QString::fromUtf8("spacecraftOrbitsCheck"));

        verticalLayout_4->addWidget(spacecraftOrbitsCheck);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout_8->addWidget(orbitsGroupBox);


        horizontalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridsGroupBox = new QGroupBox(guidesTab);
        gridsGroupBox->setObjectName(QString::fromUtf8("gridsGroupBox"));
        verticalLayout_6 = new QVBoxLayout(gridsGroupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        equatorialGridCheck = new QCheckBox(gridsGroupBox);
        equatorialGridCheck->setObjectName(QString::fromUtf8("equatorialGridCheck"));

        verticalLayout_6->addWidget(equatorialGridCheck);

        eclipticGridCheck = new QCheckBox(gridsGroupBox);
        eclipticGridCheck->setObjectName(QString::fromUtf8("eclipticGridCheck"));

        verticalLayout_6->addWidget(eclipticGridCheck);

        galacticGridCheck = new QCheckBox(gridsGroupBox);
        galacticGridCheck->setObjectName(QString::fromUtf8("galacticGridCheck"));

        verticalLayout_6->addWidget(galacticGridCheck);

        horizontalGridCheck = new QCheckBox(gridsGroupBox);
        horizontalGridCheck->setObjectName(QString::fromUtf8("horizontalGridCheck"));

        verticalLayout_6->addWidget(horizontalGridCheck);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        verticalLayout_5->addWidget(gridsGroupBox);

        constellationsGroupBox = new QGroupBox(guidesTab);
        constellationsGroupBox->setObjectName(QString::fromUtf8("constellationsGroupBox"));
        verticalLayout_7 = new QVBoxLayout(constellationsGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        diagramsCheck = new QCheckBox(constellationsGroupBox);
        diagramsCheck->setObjectName(QString::fromUtf8("diagramsCheck"));

        verticalLayout_7->addWidget(diagramsCheck);

        boundariesCheck = new QCheckBox(constellationsGroupBox);
        boundariesCheck->setObjectName(QString::fromUtf8("boundariesCheck"));

        verticalLayout_7->addWidget(boundariesCheck);

        latinNamesCheck = new QCheckBox(constellationsGroupBox);
        latinNamesCheck->setObjectName(QString::fromUtf8("latinNamesCheck"));

        verticalLayout_7->addWidget(latinNamesCheck);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);


        verticalLayout_5->addWidget(constellationsGroupBox);

        miscellaneousGroupBox = new QGroupBox(guidesTab);
        miscellaneousGroupBox->setObjectName(QString::fromUtf8("miscellaneousGroupBox"));
        verticalLayout_9 = new QVBoxLayout(miscellaneousGroupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        markersCheck = new QCheckBox(miscellaneousGroupBox);
        markersCheck->setObjectName(QString::fromUtf8("markersCheck"));

        verticalLayout_9->addWidget(markersCheck);

        eclipticLineCheck = new QCheckBox(miscellaneousGroupBox);
        eclipticLineCheck->setObjectName(QString::fromUtf8("eclipticLineCheck"));

        verticalLayout_9->addWidget(eclipticLineCheck);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);


        verticalLayout_5->addWidget(miscellaneousGroupBox);


        horizontalLayout_2->addLayout(verticalLayout_5);

        tabWidget->addTab(guidesTab, QString());
        labelsTab = new QWidget();
        labelsTab->setObjectName(QString::fromUtf8("labelsTab"));
        horizontalLayout = new QHBoxLayout(labelsTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelsGroupBox = new QGroupBox(labelsTab);
        labelsGroupBox->setObjectName(QString::fromUtf8("labelsGroupBox"));
        verticalLayout_11 = new QVBoxLayout(labelsGroupBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        starLabelsCheck = new QCheckBox(labelsGroupBox);
        starLabelsCheck->setObjectName(QString::fromUtf8("starLabelsCheck"));

        verticalLayout_11->addWidget(starLabelsCheck);

        planetLabelsCheck = new QCheckBox(labelsGroupBox);
        planetLabelsCheck->setObjectName(QString::fromUtf8("planetLabelsCheck"));

        verticalLayout_11->addWidget(planetLabelsCheck);

        dwarfPlanetLabelsCheck = new QCheckBox(labelsGroupBox);
        dwarfPlanetLabelsCheck->setObjectName(QString::fromUtf8("dwarfPlanetLabelsCheck"));

        verticalLayout_11->addWidget(dwarfPlanetLabelsCheck);

        moonLabelsCheck = new QCheckBox(labelsGroupBox);
        moonLabelsCheck->setObjectName(QString::fromUtf8("moonLabelsCheck"));

        verticalLayout_11->addWidget(moonLabelsCheck);

        minorMoonLabelsCheck = new QCheckBox(labelsGroupBox);
        minorMoonLabelsCheck->setObjectName(QString::fromUtf8("minorMoonLabelsCheck"));

        verticalLayout_11->addWidget(minorMoonLabelsCheck);

        asteroidLabelsCheck = new QCheckBox(labelsGroupBox);
        asteroidLabelsCheck->setObjectName(QString::fromUtf8("asteroidLabelsCheck"));

        verticalLayout_11->addWidget(asteroidLabelsCheck);

        cometLabelsCheck = new QCheckBox(labelsGroupBox);
        cometLabelsCheck->setObjectName(QString::fromUtf8("cometLabelsCheck"));

        verticalLayout_11->addWidget(cometLabelsCheck);

        spacecraftLabelsCheck = new QCheckBox(labelsGroupBox);
        spacecraftLabelsCheck->setObjectName(QString::fromUtf8("spacecraftLabelsCheck"));

        verticalLayout_11->addWidget(spacecraftLabelsCheck);

        galaxyLabelsCheck = new QCheckBox(labelsGroupBox);
        galaxyLabelsCheck->setObjectName(QString::fromUtf8("galaxyLabelsCheck"));

        verticalLayout_11->addWidget(galaxyLabelsCheck);

        nebulaLabelsCheck = new QCheckBox(labelsGroupBox);
        nebulaLabelsCheck->setObjectName(QString::fromUtf8("nebulaLabelsCheck"));

        verticalLayout_11->addWidget(nebulaLabelsCheck);

        openClusterLabelsCheck = new QCheckBox(labelsGroupBox);
        openClusterLabelsCheck->setObjectName(QString::fromUtf8("openClusterLabelsCheck"));

        verticalLayout_11->addWidget(openClusterLabelsCheck);

        globularClusterLabelsCheck = new QCheckBox(labelsGroupBox);
        globularClusterLabelsCheck->setObjectName(QString::fromUtf8("globularClusterLabelsCheck"));

        verticalLayout_11->addWidget(globularClusterLabelsCheck);

        constellationLabelsCheck = new QCheckBox(labelsGroupBox);
        constellationLabelsCheck->setObjectName(QString::fromUtf8("constellationLabelsCheck"));

        verticalLayout_11->addWidget(constellationLabelsCheck);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_9);


        horizontalLayout->addWidget(labelsGroupBox);

        locationsGroupBox = new QGroupBox(labelsTab);
        locationsGroupBox->setObjectName(QString::fromUtf8("locationsGroupBox"));
        verticalLayout_12 = new QVBoxLayout(locationsGroupBox);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(9, -1, -1, -1);
        locationsCheck = new QCheckBox(locationsGroupBox);
        locationsCheck->setObjectName(QString::fromUtf8("locationsCheck"));

        verticalLayout_12->addWidget(locationsCheck);

        verticalSpacer_10 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_10);

        label_2 = new QLabel(locationsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_12->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        citiesCheck = new QCheckBox(locationsGroupBox);
        citiesCheck->setObjectName(QString::fromUtf8("citiesCheck"));

        gridLayout->addWidget(citiesCheck, 0, 0, 1, 1);

        landingSitesCheck = new QCheckBox(locationsGroupBox);
        landingSitesCheck->setObjectName(QString::fromUtf8("landingSitesCheck"));

        gridLayout->addWidget(landingSitesCheck, 2, 0, 1, 1);

        volcanoesCheck = new QCheckBox(locationsGroupBox);
        volcanoesCheck->setObjectName(QString::fromUtf8("volcanoesCheck"));

        gridLayout->addWidget(volcanoesCheck, 3, 1, 1, 1);

        observatoriesCheck = new QCheckBox(locationsGroupBox);
        observatoriesCheck->setObjectName(QString::fromUtf8("observatoriesCheck"));

        gridLayout->addWidget(observatoriesCheck, 1, 0, 1, 1);

        cratersCheck = new QCheckBox(locationsGroupBox);
        cratersCheck->setObjectName(QString::fromUtf8("cratersCheck"));

        gridLayout->addWidget(cratersCheck, 0, 1, 1, 1);

        montesCheck = new QCheckBox(locationsGroupBox);
        montesCheck->setObjectName(QString::fromUtf8("montesCheck"));

        gridLayout->addWidget(montesCheck, 3, 0, 1, 1);

        terraeCheck = new QCheckBox(locationsGroupBox);
        terraeCheck->setObjectName(QString::fromUtf8("terraeCheck"));

        gridLayout->addWidget(terraeCheck, 2, 1, 1, 1);

        vallesCheck = new QCheckBox(locationsGroupBox);
        vallesCheck->setObjectName(QString::fromUtf8("vallesCheck"));

        gridLayout->addWidget(vallesCheck, 1, 1, 1, 1);

        mariaCheck = new QCheckBox(locationsGroupBox);
        mariaCheck->setObjectName(QString::fromUtf8("mariaCheck"));

        gridLayout->addWidget(mariaCheck, 4, 0, 1, 1);

        otherLocationsCheck = new QCheckBox(locationsGroupBox);
        otherLocationsCheck->setObjectName(QString::fromUtf8("otherLocationsCheck"));

        gridLayout->addWidget(otherLocationsCheck, 4, 1, 1, 1);


        verticalLayout_12->addLayout(gridLayout);

        verticalSpacer_11 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_11);

        label = new QLabel(locationsGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_12->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        featureSizeSlider = new QSlider(locationsGroupBox);
        featureSizeSlider->setObjectName(QString::fromUtf8("featureSizeSlider"));
        featureSizeSlider->setMaximum(999);
        featureSizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(featureSizeSlider);

        featureSizeEdit = new QLineEdit(locationsGroupBox);
        featureSizeEdit->setObjectName(QString::fromUtf8("featureSizeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(featureSizeEdit->sizePolicy().hasHeightForWidth());
        featureSizeEdit->setSizePolicy(sizePolicy);
        featureSizeEdit->setMinimumSize(QSize(80, 0));
        featureSizeEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(featureSizeEdit);


        verticalLayout_12->addLayout(horizontalLayout_4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_8);


        horizontalLayout->addWidget(locationsGroupBox);

        tabWidget->addTab(labelsTab, QString());
        renderTab = new QWidget();
        renderTab->setObjectName(QString::fromUtf8("renderTab"));
        horizontalLayout_5 = new QHBoxLayout(renderTab);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        textureResolutionGroupBox = new QGroupBox(renderTab);
        textureResolutionGroupBox->setObjectName(QString::fromUtf8("textureResolutionGroupBox"));
        verticalLayout_10 = new QVBoxLayout(textureResolutionGroupBox);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        lowResolutionButton = new QRadioButton(textureResolutionGroupBox);
        lowResolutionButton->setObjectName(QString::fromUtf8("lowResolutionButton"));

        verticalLayout_10->addWidget(lowResolutionButton);

        mediumResolutionButton = new QRadioButton(textureResolutionGroupBox);
        mediumResolutionButton->setObjectName(QString::fromUtf8("mediumResolutionButton"));

        verticalLayout_10->addWidget(mediumResolutionButton);

        highResolutionButton = new QRadioButton(textureResolutionGroupBox);
        highResolutionButton->setObjectName(QString::fromUtf8("highResolutionButton"));

        verticalLayout_10->addWidget(highResolutionButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        verticalLayout_14->addWidget(textureResolutionGroupBox);

        ambientLightGroupBox = new QGroupBox(renderTab);
        ambientLightGroupBox->setObjectName(QString::fromUtf8("ambientLightGroupBox"));
        verticalLayout_15 = new QVBoxLayout(ambientLightGroupBox);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        ambientLightSlider = new QSlider(ambientLightGroupBox);
        ambientLightSlider->setObjectName(QString::fromUtf8("ambientLightSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ambientLightSlider->sizePolicy().hasHeightForWidth());
        ambientLightSlider->setSizePolicy(sizePolicy1);
        ambientLightSlider->setOrientation(Qt::Horizontal);

        verticalLayout_15->addWidget(ambientLightSlider);

        tintedIlluminationCheck = new QCheckBox(ambientLightGroupBox);
        tintedIlluminationCheck->setObjectName(QString::fromUtf8("tintedIlluminationCheck"));
        tintedIlluminationCheck->setEnabled(true);
        tintedIlluminationCheck->setChecked(false);

        verticalLayout_15->addWidget(tintedIlluminationCheck);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_17);

        renderPathGroupBox = new QGroupBox(ambientLightGroupBox);
        renderPathGroupBox->setObjectName(QString::fromUtf8("renderPathGroupBox"));
        verticalLayout_13 = new QVBoxLayout(renderPathGroupBox);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        renderPathBox = new QComboBox(renderPathGroupBox);
        renderPathBox->setObjectName(QString::fromUtf8("renderPathBox"));

        verticalLayout_13->addWidget(renderPathBox);

        antialiasLinesCheck = new QCheckBox(renderPathGroupBox);
        antialiasLinesCheck->setObjectName(QString::fromUtf8("antialiasLinesCheck"));

        verticalLayout_13->addWidget(antialiasLinesCheck);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_13);


        verticalLayout_15->addWidget(renderPathGroupBox);


        verticalLayout_14->addWidget(ambientLightGroupBox);


        horizontalLayout_5->addLayout(verticalLayout_14);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        starStyleGroupBox = new QGroupBox(renderTab);
        starStyleGroupBox->setObjectName(QString::fromUtf8("starStyleGroupBox"));
        verticalLayout_17 = new QVBoxLayout(starStyleGroupBox);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        pointStarsButton = new QRadioButton(starStyleGroupBox);
        pointStarsButton->setObjectName(QString::fromUtf8("pointStarsButton"));

        verticalLayout_17->addWidget(pointStarsButton);

        fuzzyPointStarsButton = new QRadioButton(starStyleGroupBox);
        fuzzyPointStarsButton->setObjectName(QString::fromUtf8("fuzzyPointStarsButton"));

        verticalLayout_17->addWidget(fuzzyPointStarsButton);

        scaledDiscsButton = new QRadioButton(starStyleGroupBox);
        scaledDiscsButton->setObjectName(QString::fromUtf8("scaledDiscsButton"));

        verticalLayout_17->addWidget(scaledDiscsButton);

        verticalSpacer_15 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_15);

        autoMagnitudeCheck = new QCheckBox(starStyleGroupBox);
        autoMagnitudeCheck->setObjectName(QString::fromUtf8("autoMagnitudeCheck"));

        verticalLayout_17->addWidget(autoMagnitudeCheck);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_16);


        verticalLayout_18->addWidget(starStyleGroupBox);

        starColorGroupBox = new QGroupBox(renderTab);
        starColorGroupBox->setObjectName(QString::fromUtf8("starColorGroupBox"));
        verticalLayout_19 = new QVBoxLayout(starColorGroupBox);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        starColorBox = new QComboBox(starColorGroupBox);
        starColorBox->setObjectName(QString::fromUtf8("starColorBox"));

        verticalLayout_19->addWidget(starColorBox);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_12);


        verticalLayout_18->addWidget(starColorGroupBox);


        horizontalLayout_5->addLayout(verticalLayout_18);

        tabWidget->addTab(renderTab, QString());
        timeTab = new QWidget();
        timeTab->setObjectName(QString::fromUtf8("timeTab"));
        formLayout = new QFormLayout(timeTab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(timeTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        dateFormatBox = new QComboBox(timeTab);
        dateFormatBox->setObjectName(QString::fromUtf8("dateFormatBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateFormatBox);

        tabWidget->addTab(timeTab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(preferencesDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(preferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *preferencesDialog)
    {
        preferencesDialog->setWindowTitle(QApplication::translate("preferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        objectsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Objects", 0, QApplication::UnicodeUTF8));
        starsCheck->setText(QApplication::translate("preferencesDialog", "Stars", 0, QApplication::UnicodeUTF8));
        planetsCheck->setText(QApplication::translate("preferencesDialog", "Planets", 0, QApplication::UnicodeUTF8));
        galaxiesCheck->setText(QApplication::translate("preferencesDialog", "Galaxies", 0, QApplication::UnicodeUTF8));
        nebulaeCheck->setText(QApplication::translate("preferencesDialog", "Nebulae", 0, QApplication::UnicodeUTF8));
        openClustersCheck->setText(QApplication::translate("preferencesDialog", "Open clusters", 0, QApplication::UnicodeUTF8));
        globularClustersCheck->setText(QApplication::translate("preferencesDialog", "Globular clusters", 0, QApplication::UnicodeUTF8));
        featuresGroupBox->setTitle(QApplication::translate("preferencesDialog", "Features", 0, QApplication::UnicodeUTF8));
        atmospheresCheck->setText(QApplication::translate("preferencesDialog", "Atmospheres", 0, QApplication::UnicodeUTF8));
        cloudsCheck->setText(QApplication::translate("preferencesDialog", "Clouds", 0, QApplication::UnicodeUTF8));
        cloudShadowsCheck->setText(QApplication::translate("preferencesDialog", "Cloud shadows", 0, QApplication::UnicodeUTF8));
        eclipseShadowsCheck->setText(QApplication::translate("preferencesDialog", "Eclipse shadows", 0, QApplication::UnicodeUTF8));
        ringShadowsCheck->setText(QApplication::translate("preferencesDialog", "Ring shadows", 0, QApplication::UnicodeUTF8));
        nightsideLightsCheck->setText(QApplication::translate("preferencesDialog", "Nightside lights", 0, QApplication::UnicodeUTF8));
        cometTailsCheck->setText(QApplication::translate("preferencesDialog", "Comet tails", 0, QApplication::UnicodeUTF8));
        limitOfKnowledgeCheck->setText(QApplication::translate("preferencesDialog", "Limit of knowledge textures", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(objectsTab), QApplication::translate("preferencesDialog", "Objects", 0, QApplication::UnicodeUTF8));
        orbitsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Orbits", 0, QApplication::UnicodeUTF8));
        orbitsCheck->setText(QApplication::translate("preferencesDialog", "Show orbits", 0, QApplication::UnicodeUTF8));
        partialTrajectoriesCheck->setText(QApplication::translate("preferencesDialog", "Partial trajectories", 0, QApplication::UnicodeUTF8));
        starOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Stars", 0, QApplication::UnicodeUTF8));
        planetOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Planets", 0, QApplication::UnicodeUTF8));
        dwarfPlanetOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Dwarf planets", 0, QApplication::UnicodeUTF8));
        moonOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Moons", 0, QApplication::UnicodeUTF8));
        minorMoonOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Minor moons", 0, QApplication::UnicodeUTF8));
        asteroidOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Asteroids", 0, QApplication::UnicodeUTF8));
        cometOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Comets", 0, QApplication::UnicodeUTF8));
        spacecraftOrbitsCheck->setText(QApplication::translate("preferencesDialog", "Spacecraft", 0, QApplication::UnicodeUTF8));
        gridsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Grids", 0, QApplication::UnicodeUTF8));
        equatorialGridCheck->setText(QApplication::translate("preferencesDialog", "Equatorial", 0, QApplication::UnicodeUTF8));
        eclipticGridCheck->setText(QApplication::translate("preferencesDialog", "Ecliptic", 0, QApplication::UnicodeUTF8));
        galacticGridCheck->setText(QApplication::translate("preferencesDialog", "Galactic", 0, QApplication::UnicodeUTF8));
        horizontalGridCheck->setText(QApplication::translate("preferencesDialog", "Horizontal", 0, QApplication::UnicodeUTF8));
        constellationsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Constellations", 0, QApplication::UnicodeUTF8));
        diagramsCheck->setText(QApplication::translate("preferencesDialog", "Diagrams", 0, QApplication::UnicodeUTF8));
        boundariesCheck->setText(QApplication::translate("preferencesDialog", "Boundaries", 0, QApplication::UnicodeUTF8));
        latinNamesCheck->setText(QApplication::translate("preferencesDialog", "Latin names", 0, QApplication::UnicodeUTF8));
        miscellaneousGroupBox->setTitle(QApplication::translate("preferencesDialog", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        markersCheck->setText(QApplication::translate("preferencesDialog", "Markers", 0, QApplication::UnicodeUTF8));
        eclipticLineCheck->setText(QApplication::translate("preferencesDialog", "Ecliptic line", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(guidesTab), QApplication::translate("preferencesDialog", "Guides", 0, QApplication::UnicodeUTF8));
        labelsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Labels", 0, QApplication::UnicodeUTF8));
        starLabelsCheck->setText(QApplication::translate("preferencesDialog", "Stars", 0, QApplication::UnicodeUTF8));
        planetLabelsCheck->setText(QApplication::translate("preferencesDialog", "Planets", 0, QApplication::UnicodeUTF8));
        dwarfPlanetLabelsCheck->setText(QApplication::translate("preferencesDialog", "Dwarf planets", 0, QApplication::UnicodeUTF8));
        moonLabelsCheck->setText(QApplication::translate("preferencesDialog", "Moons", 0, QApplication::UnicodeUTF8));
        minorMoonLabelsCheck->setText(QApplication::translate("preferencesDialog", "Minor moons", 0, QApplication::UnicodeUTF8));
        asteroidLabelsCheck->setText(QApplication::translate("preferencesDialog", "Asteroids", 0, QApplication::UnicodeUTF8));
        cometLabelsCheck->setText(QApplication::translate("preferencesDialog", "Comets", 0, QApplication::UnicodeUTF8));
        spacecraftLabelsCheck->setText(QApplication::translate("preferencesDialog", "Spacecraft", 0, QApplication::UnicodeUTF8));
        galaxyLabelsCheck->setText(QApplication::translate("preferencesDialog", "Galaxies", 0, QApplication::UnicodeUTF8));
        nebulaLabelsCheck->setText(QApplication::translate("preferencesDialog", "Nebulae", 0, QApplication::UnicodeUTF8));
        openClusterLabelsCheck->setText(QApplication::translate("preferencesDialog", "Open clusters", 0, QApplication::UnicodeUTF8));
        globularClusterLabelsCheck->setText(QApplication::translate("preferencesDialog", "Globular clusters", 0, QApplication::UnicodeUTF8));
        constellationLabelsCheck->setText(QApplication::translate("preferencesDialog", "Constellations", 0, QApplication::UnicodeUTF8));
        locationsGroupBox->setTitle(QApplication::translate("preferencesDialog", "Locations", 0, QApplication::UnicodeUTF8));
        locationsCheck->setText(QApplication::translate("preferencesDialog", "Show locations", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("preferencesDialog", "Location types:", 0, QApplication::UnicodeUTF8));
        citiesCheck->setText(QApplication::translate("preferencesDialog", "Cities", 0, QApplication::UnicodeUTF8));
        landingSitesCheck->setText(QApplication::translate("preferencesDialog", "Landing sites", 0, QApplication::UnicodeUTF8));
        volcanoesCheck->setText(QApplication::translate("preferencesDialog", "Volcanoes", 0, QApplication::UnicodeUTF8));
        observatoriesCheck->setText(QApplication::translate("preferencesDialog", "Observatories", 0, QApplication::UnicodeUTF8));
        cratersCheck->setText(QApplication::translate("preferencesDialog", "Craters", 0, QApplication::UnicodeUTF8));
        montesCheck->setText(QApplication::translate("preferencesDialog", "Montes (mountains)", 0, QApplication::UnicodeUTF8));
        terraeCheck->setText(QApplication::translate("preferencesDialog", "Terrae (land masses)", 0, QApplication::UnicodeUTF8));
        vallesCheck->setText(QApplication::translate("preferencesDialog", "Valles (valleys)", 0, QApplication::UnicodeUTF8));
        mariaCheck->setText(QApplication::translate("preferencesDialog", "Maria (seas)", 0, QApplication::UnicodeUTF8));
        otherLocationsCheck->setText(QApplication::translate("preferencesDialog", "Other features", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("preferencesDialog", "Minimum labelled feature size:", 0, QApplication::UnicodeUTF8));
        featureSizeEdit->setInputMask(QApplication::translate("preferencesDialog", "000; ", 0, QApplication::UnicodeUTF8));
        featureSizeEdit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(labelsTab), QApplication::translate("preferencesDialog", "Labels", 0, QApplication::UnicodeUTF8));
        textureResolutionGroupBox->setTitle(QApplication::translate("preferencesDialog", "Texture resolution", 0, QApplication::UnicodeUTF8));
        lowResolutionButton->setText(QApplication::translate("preferencesDialog", "Low", 0, QApplication::UnicodeUTF8));
        mediumResolutionButton->setText(QApplication::translate("preferencesDialog", "Medium", 0, QApplication::UnicodeUTF8));
        highResolutionButton->setText(QApplication::translate("preferencesDialog", "High", 0, QApplication::UnicodeUTF8));
        ambientLightGroupBox->setTitle(QApplication::translate("preferencesDialog", "Ambient light", 0, QApplication::UnicodeUTF8));
        tintedIlluminationCheck->setText(QApplication::translate("preferencesDialog", "Tinted illumination", 0, QApplication::UnicodeUTF8));
        renderPathGroupBox->setTitle(QApplication::translate("preferencesDialog", "Render path", 0, QApplication::UnicodeUTF8));
        antialiasLinesCheck->setText(QApplication::translate("preferencesDialog", "Antialiased lines", 0, QApplication::UnicodeUTF8));
        starStyleGroupBox->setTitle(QApplication::translate("preferencesDialog", "Star style", 0, QApplication::UnicodeUTF8));
        pointStarsButton->setText(QApplication::translate("preferencesDialog", "Points", 0, QApplication::UnicodeUTF8));
        fuzzyPointStarsButton->setText(QApplication::translate("preferencesDialog", "Fuzzy points", 0, QApplication::UnicodeUTF8));
        scaledDiscsButton->setText(QApplication::translate("preferencesDialog", "Scaled discs", 0, QApplication::UnicodeUTF8));
        autoMagnitudeCheck->setText(QApplication::translate("preferencesDialog", "Auto-magnitude", 0, QApplication::UnicodeUTF8));
        starColorGroupBox->setTitle(QApplication::translate("preferencesDialog", "Star colors", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(renderTab), QApplication::translate("preferencesDialog", "Render", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("preferencesDialog", "Date display format:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(timeTab), QApplication::translate("preferencesDialog", "Time", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class preferencesDialog: public Ui_preferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
