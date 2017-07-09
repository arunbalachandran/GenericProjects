/********************************************************************************
** Form generated from reading UI file 'imageviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIEWER_H
#define UI_IMAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewer
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageViewer)
    {
        if (ImageViewer->objectName().isEmpty())
            ImageViewer->setObjectName(QStringLiteral("ImageViewer"));
        ImageViewer->resize(400, 300);
        menuBar = new QMenuBar(ImageViewer);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ImageViewer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageViewer);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageViewer->addToolBar(mainToolBar);
        centralWidget = new QWidget(ImageViewer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImageViewer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageViewer);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageViewer->setStatusBar(statusBar);

        retranslateUi(ImageViewer);

        QMetaObject::connectSlotsByName(ImageViewer);
    } // setupUi

    void retranslateUi(QMainWindow *ImageViewer)
    {
        ImageViewer->setWindowTitle(QApplication::translate("ImageViewer", "ImageViewer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageViewer: public Ui_ImageViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIEWER_H
