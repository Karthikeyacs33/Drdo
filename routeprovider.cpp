#include "routeprovider.h"
#include<QFile>
#include<QString>
#include<QTextStream>
#include<QDir>
#include<Qvector>
#include<QDebug>
#include <QList>
#include "QDebug"


RouteProvider::RouteProvider(QObject *parent) : QObject(parent)
{


    QFile File("E:/Misc/final/pos.txt");
    File.open(QIODevice::ReadOnly);
    QTextStream stream(&File);
    QString Filedata;
    QString cord;

    while(!stream.atEnd())
    {
        Filedata = stream.readLine();
        int n = Filedata.toInt();
            //qDebug() <<n ;
            while(n>0)
            {
                cord = stream.readLine();
                QStringList x = cord.split(" ");
                double lat = x[0].toDouble();
                double lon = x[1].toDouble();
                m_path.append(QVariant::fromValue(QGeoCoordinate(lat ,lon)));
               // qDebug() << m_path ;
                n-=1;
            }
            //qDebug()<<m_path;
            m_path1.append(m_path);
            m_path.clear();


    }

   qDebug()<<m_path1[1];

}


QList<QVariantList> RouteProvider::path()
{

    return m_path1;
}
 //------------------------------------------------------------------------------------//

