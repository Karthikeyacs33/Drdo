#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <qqml.h>
#include <QMetaClassInfo>
#include <QGeoPath>
#include <QMainWindow>
#include <QVariant>
#include <QGeoCoordinate>
#include <QMainWindow>
#include "routeprovider.h"

//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    RouteProvider m_provider;
    //Ui::MainWindow *ui;
signals:
    //void addMarker(QVariant, QVariant);
};
#endif // MAINWINDOW_H
