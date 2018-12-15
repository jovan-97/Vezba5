#include "convertlogic.h"
#include <QDebug>
ConvertLogic::ConvertLogic(QObject *parent) : QObject(parent)
{
    br="";
}

void ConvertLogic::doCommand(QString v)
{
    QChar c=v[0];
    int bb;
    if(c>='0' && c<='9')
    {
        qInfo()<<"Brojcani podatak:"<<c;
        bb=c.digitValue();
        emit promenaBroja(bb);
        //br.append(c);
    }
    else if(c>='A' && c<='F' && v!="CLEAR") {
        qInfo()<<"Hex brojcani pod podatak:"<<c;
        //br.append(c);
        bool a;
        bb=v.toUInt(&a,16);
        emit promenaBroja(bb);
    }
    else if(v=="CLEAR") {
        emit promenaBroja(512);
    }
    //qInfo()<<"Broj je:"<<br;
}
