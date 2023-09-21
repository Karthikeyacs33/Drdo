#ifndef ROUTEPROVIDER_H
#define ROUTEPROVIDER_H

#include <QObject>
#include <qqml.h>
#include <QMetaClassInfo>
#include <QGeoPath>
#include <QDebug>

class RouteProvider : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QVariantList> path READ path NOTIFY pathUpdated)
    QML_ELEMENT

public:
    explicit RouteProvider(QObject *parent = nullptr);

    QList<QVariantList> path();

signals:
    void pathUpdated();

private:
    QVariantList m_path;
    QList<QVariantList> m_path1;
};

#endif // ROUTEPROVIDER_H
