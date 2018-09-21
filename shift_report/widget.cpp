#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // initial days that's left to take sleep
    xuanDays = 5.5;
    chunDays = 4.0;
    days = "";

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_close_clicked()
{
    Widget::close();
}


void Widget::on_report_clicked()
{
    if(ui->xuan->isChecked() == true)
    {
        ui->stats->setText("宣雄民待补休 " + QString("%1").arg(xuanDays) + "天");
    }

    if(ui->shou->isChecked() == true)
    {
//        ui->stats->setText("寿春杰待补休" + days.sprintf("%.1f", chunDays) + "天");
        ui->stats->setText("寿春杰待补休" + QString("%1").arg(chunDays) + "天");
    }

}
