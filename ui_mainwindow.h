/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionExcitation;
    QAction *actionPlot;
    QAction *actionAMI;
    QAction *actionBuild;
    QAction *actionDebug;
    QAction *actionProject;
    QAction *actionFile;
    QWidget *MainInterface;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *amiModelCheckBox;
    QTreeView *projectTreeView;
    QGraphicsView *diagramWindow;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *codeArea;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QTextEdit *myCode;
    QWidget *ami_init;
    QGridLayout *gridLayout_3;
    QTextEdit *amiInit;
    QWidget *ami_getwave;
    QGridLayout *gridLayout_2;
    QTextEdit *amiGetWave;
    QWidget *ami_close;
    QGridLayout *gridLayout_4;
    QTextEdit *amiClose;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QPushButton *compileButton;
    QPushButton *simulateButton;
    QPushButton *generateAmiButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNew;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuTool;
    QMenu *menuIntert;
    QMenu *menuProject;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1029, 649);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionExcitation = new QAction(MainWindow);
        actionExcitation->setObjectName(QString::fromUtf8("actionExcitation"));
        actionPlot = new QAction(MainWindow);
        actionPlot->setObjectName(QString::fromUtf8("actionPlot"));
        actionAMI = new QAction(MainWindow);
        actionAMI->setObjectName(QString::fromUtf8("actionAMI"));
        actionBuild = new QAction(MainWindow);
        actionBuild->setObjectName(QString::fromUtf8("actionBuild"));
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionProject = new QAction(MainWindow);
        actionProject->setObjectName(QString::fromUtf8("actionProject"));
        actionFile = new QAction(MainWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        MainInterface = new QWidget(MainWindow);
        MainInterface->setObjectName(QString::fromUtf8("MainInterface"));
        gridLayout = new QGridLayout(MainInterface);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        amiModelCheckBox = new QCheckBox(MainInterface);
        amiModelCheckBox->setObjectName(QString::fromUtf8("amiModelCheckBox"));

        verticalLayout->addWidget(amiModelCheckBox);

        projectTreeView = new QTreeView(MainInterface);
        projectTreeView->setObjectName(QString::fromUtf8("projectTreeView"));
        projectTreeView->setMouseTracking(false);

        verticalLayout->addWidget(projectTreeView);

        diagramWindow = new QGraphicsView(MainInterface);
        diagramWindow->setObjectName(QString::fromUtf8("diagramWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diagramWindow->sizePolicy().hasHeightForWidth());
        diagramWindow->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(diagramWindow);

        verticalSpacer = new QSpacerItem(10, 32, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        codeArea = new QTabWidget(MainInterface);
        codeArea->setObjectName(QString::fromUtf8("codeArea"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        myCode = new QTextEdit(tab);
        myCode->setObjectName(QString::fromUtf8("myCode"));

        gridLayout_5->addWidget(myCode, 0, 0, 1, 1);

        codeArea->addTab(tab, QString());
        ami_init = new QWidget();
        ami_init->setObjectName(QString::fromUtf8("ami_init"));
        gridLayout_3 = new QGridLayout(ami_init);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        amiInit = new QTextEdit(ami_init);
        amiInit->setObjectName(QString::fromUtf8("amiInit"));

        gridLayout_3->addWidget(amiInit, 0, 0, 1, 1);

        codeArea->addTab(ami_init, QString());
        ami_getwave = new QWidget();
        ami_getwave->setObjectName(QString::fromUtf8("ami_getwave"));
        gridLayout_2 = new QGridLayout(ami_getwave);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        amiGetWave = new QTextEdit(ami_getwave);
        amiGetWave->setObjectName(QString::fromUtf8("amiGetWave"));

        gridLayout_2->addWidget(amiGetWave, 0, 0, 1, 1);

        codeArea->addTab(ami_getwave, QString());
        ami_close = new QWidget();
        ami_close->setObjectName(QString::fromUtf8("ami_close"));
        gridLayout_4 = new QGridLayout(ami_close);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        amiClose = new QTextEdit(ami_close);
        amiClose->setObjectName(QString::fromUtf8("amiClose"));

        gridLayout_4->addWidget(amiClose, 0, 0, 1, 1);

        codeArea->addTab(ami_close, QString());

        verticalLayout_2->addWidget(codeArea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveButton = new QPushButton(MainInterface);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        compileButton = new QPushButton(MainInterface);
        compileButton->setObjectName(QString::fromUtf8("compileButton"));

        horizontalLayout_2->addWidget(compileButton);

        simulateButton = new QPushButton(MainInterface);
        simulateButton->setObjectName(QString::fromUtf8("simulateButton"));

        horizontalLayout_2->addWidget(simulateButton);

        generateAmiButton = new QPushButton(MainInterface);
        generateAmiButton->setObjectName(QString::fromUtf8("generateAmiButton"));

        horizontalLayout_2->addWidget(generateAmiButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        MainWindow->setCentralWidget(MainInterface);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1029, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNew = new QMenu(menuFile);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTool = new QMenu(menuBar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuIntert = new QMenu(menuTool);
        menuIntert->setObjectName(QString::fromUtf8("menuIntert"));
        menuProject = new QMenu(menuBar);
        menuProject->setObjectName(QString::fromUtf8("menuProject"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuProject->menuAction());
        menuBar->addAction(menuTool->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuNew->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionClose);
        menuNew->addAction(actionProject);
        menuNew->addAction(actionFile);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuHelp->addAction(actionAbout);
        menuTool->addAction(menuIntert->menuAction());
        menuTool->addAction(actionBuild);
        menuTool->addAction(actionDebug);
        menuIntert->addAction(actionExcitation);
        menuIntert->addAction(actionPlot);
        menuIntert->addAction(actionAMI);

        retranslateUi(MainWindow);

        codeArea->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionExcitation->setText(QApplication::translate("MainWindow", "Excitation", nullptr));
#ifndef QT_NO_STATUSTIP
        actionExcitation->setStatusTip(QApplication::translate("MainWindow", "For excitation generation", nullptr));
#endif // QT_NO_STATUSTIP
        actionPlot->setText(QApplication::translate("MainWindow", "Plotting", nullptr));
        actionAMI->setText(QApplication::translate("MainWindow", "AMI", nullptr));
        actionBuild->setText(QApplication::translate("MainWindow", "Build", nullptr));
        actionDebug->setText(QApplication::translate("MainWindow", "Debug", nullptr));
        actionProject->setText(QApplication::translate("MainWindow", "Project", nullptr));
        actionFile->setText(QApplication::translate("MainWindow", "File", nullptr));
        amiModelCheckBox->setText(QApplication::translate("MainWindow", "AMIModel", nullptr));
        codeArea->setTabText(codeArea->indexOf(tab), QApplication::translate("MainWindow", "Your_Code", nullptr));
        amiInit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0055ff;\">#include</span><span style=\" font-size:12pt;\"> &quot;ami.h&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0055ff;\">#include</span><span style=\" font-size:12pt;\"> &lt;string&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p st"
                        "yle=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> AMI_Init(</span><span style=\" font-size:12pt; color:#00aa00;\">double</span><span style=\" font-size:12pt;\"> *impulse_matrix, </span><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> row_size, </span><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> aggressors,</span><span style=\" font-size:12pt; color:#00aa00;\">double</span><span style=\" font-size:12pt;\"> sample_interval, </span><span style=\" font-size:12pt; color:#00aa00;\">double</span><span style=\" font-size:12pt;\"> bit_time, </span><span style=\" font-size:12pt; color:#00aa00;\">char"
                        "</span><span style=\" font-size:12pt;\"> **AMI_parameters_in, </span><span style=\" font-size:12pt; color:#00aa00;\">char</span><span style=\" font-size:12pt;\"> **AMI_parameters_out, </span><span style=\" font-size:12pt; color:#00aa00;\">void</span><span style=\" font-size:12pt;\"> **AMI_memory_handle, </span><span style=\" font-size:12pt; color:#00aa00;\">char</span><span style=\" font-size:12pt;\"> **msg) {</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	</span><span style=\" font-size:12pt; color:#55aa00;\">/*</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	double tap[3] = { 0.0, 1.0, -1.5 };</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; fon"
                        "t-size:12pt; color:#55aa00;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	double *imp_matrix = new double[row_size];</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	std::memcpy(imp_matrix, impulse_matrix, sizeof(double)*row_size);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	for (int i = 32; i &lt; row_size-32; i++) {</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">		imp_matrix[i] = imp_matrix[i] + imp_matrix[i + 32]*tap[2];</span></p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	}</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	std::memcpy(impulse_matrix, imp_matrix, sizeof(double)*row_size);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	Qtstatic* amimsg = new Qtstatic();</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	*msg = (char*)(amimsg-&gt;mymsg);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	delet"
                        "e[] imp_matrix;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	//delete amimsg;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#55aa00;\">	*/</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	</span><span style=\" font-size:12pt; color:#0055ff;\">return</span><span style=\" font-size:12pt;\"> 1;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">}</span></p></body></html>", nullptr));
        codeArea->setTabText(codeArea->indexOf(ami_init), QApplication::translate("MainWindow", "AMI_Init", nullptr));
        amiGetWave->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &lt;string&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &lt;fstream&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &lt;sstream&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &lt;algorithm&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &lt;cstdlib&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#0000ff;\">#include &quot;ami.h&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> AMI_GetWave(</span><span style=\" font-size:12pt; color:#0"
                        "0aa00;\">double</span><span style=\" font-size:12pt;\"> *wave, </span><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> wave_size, long aggressors, </span><span style=\" font-size:12pt; color:#00aa00;\">double</span><span style=\" font-size:12pt;\"> *clock_times, </span><span style=\" font-size:12pt; color:#00aa00;\">char</span><span style=\" font-size:12pt;\"> **AMI_parameters_out, </span><span style=\" font-size:12pt; color:#00aa00;\">void</span><span style=\" font-size:12pt;\"> **AMI_memory, </span><span style=\" font-size:12pt; color:#00aa00;\">char</span><span style=\" font-size:12pt;\"> **msg) </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">{</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	</span><span style=\" font-size:1"
                        "2pt; color:#00aa00;\">int</span><span style=\" font-size:12pt;\"> i ;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	for(i = 0; i &lt; wave_size; i++)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	{</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	    wave[i] = -1 * wave[i];</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	}</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	</span><span style=\" font-size:12pt; c"
                        "olor:#0000ff;\">return</span><span style=\" font-size:12pt;\"> 0;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">}</span></p></body></html>", nullptr));
        codeArea->setTabText(codeArea->indexOf(ami_getwave), QApplication::translate("MainWindow", "AMI_GetWave", nullptr));
        amiClose->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#00aa00;\">long</span><span style=\" font-size:12pt;\"> AMI_Close(</span><span style=\" font-size:12pt; color:#00aa00;\">void</span><span style=\" font-size:12pt;\"> *AMI_memory) {</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">	r"
                        "eturn 0;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">}</span></p></body></html>", nullptr));
        codeArea->setTabText(codeArea->indexOf(ami_close), QApplication::translate("MainWindow", "AMI_Close", nullptr));
        saveButton->setText(QApplication::translate("MainWindow", "Save", nullptr));
        compileButton->setText(QApplication::translate("MainWindow", "Compile", nullptr));
        simulateButton->setText(QApplication::translate("MainWindow", "Simulate", nullptr));
        generateAmiButton->setText(QApplication::translate("MainWindow", "Generate DLL", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuTool->setTitle(QApplication::translate("MainWindow", "Tool", nullptr));
        menuIntert->setTitle(QApplication::translate("MainWindow", "Intert", nullptr));
        menuProject->setTitle(QApplication::translate("MainWindow", "Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
