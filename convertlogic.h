#ifndef CONVERTLOGIC_H
#define CONVERTLOGIC_H

#include <QObject>

class ConvertLogic : public QObject
{
    Q_OBJECT
public:
    explicit ConvertLogic(QObject *parent = nullptr);
    void doCommand(QString v);
private:
    QString br;
signals:
     void numberBaseChanged(int);
     void promenaBroja(int);
//public slots:
     //void onNumberBaseChanged(int base);
     //void onNumberChanged(int num);*/
};

#endif // CONVERTLOGIC_H
