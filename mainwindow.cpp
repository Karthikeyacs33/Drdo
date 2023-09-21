#include "mainwindow.h"
#include <QQuickWidget>
#include <QQmlContext>
#include<QFile>
#include<QString>
#include<QTextStream>
#include<QDir>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{



    auto centralWidget = new QQuickWidget(this);
    centralWidget->setSource(QUrl{"qrc:/CentralMap.qml"});
    centralWidget->rootContext()->setContextProperty("routeProvider", &m_provider);
    centralWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

    this->setCentralWidget(centralWidget);
    this->resize(600, 600);


}

MainWindow::~MainWindow()
{

}

