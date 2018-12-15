#ifndef WIDGET_H
#define WIDGET_H
#include"convertlogic.h"
#include <QWidget>
#include <QObject>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

/*public slots:
     void onNumberBaseChanged(int base);
     void onNumberChanged(int num);
*/
private slots:
    void on_CLEAR_clicked();
    void onBtnClicked();
    void onPromeniBroj(int num);
private:
    Ui::Widget *ui;
    ConvertLogic *conv;
};

#endif // WIDGET_H
