#ifndef PATH_H
#define PATH_H

//#include <string>
#include <QString>

const QString base_path = "C:\\Users\\HP\\Downloads\\System_Monitor\\System_Monitor\\";

QString get_path(QString s)
{
    QString path = base_path + s;
    return path;
}

#endif // PATH_H
