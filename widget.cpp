#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

//#include <QObject>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    conv = new ConvertLogic(this);
    ui->setupUi(this);
    qInfo() << "T1";
    connect(conv, SIGNAL(promenaBroja(int)), this, SLOT(onPromeniBroj(int)));
    connect(ui->BT0, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT1, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT2, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT3, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT4, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT5, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT6, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT7, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT8, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BT9, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTA, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTB, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTC, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTD, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTE, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->BTF, SIGNAL(clicked()), this, SLOT (onBtnClicked()));
    connect(ui->CLEAR, SIGNAL(clicked()), this, SLOT (onBtnClicked()));


}
void Widget::onPromeniBroj(int num)
{
    if(num<512)///Brisanje ili pisanje
    {
        //qInfo() << num;
        QString s =ui->Broj->text();
        s.append(QString::number(num,16).toUpper());
        ui->Broj->setText(s);
    }
    else {
         ui->Broj->setText("");
    }

}
void Widget::onBtnClicked()
{
     //qInfo() << "pressed";
     QPushButton * bb=qobject_cast<QPushButton*>(sender());
     QString btext = bb->text();
     conv->doCommand(btext);
}



Widget::~Widget()
{
    delete ui;
}

void Widget::on_CLEAR_clicked()
{
    qInfo() << "C++ Style Info Message";
}
