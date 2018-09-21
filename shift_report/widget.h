#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_close_clicked();
    void on_report_clicked();

private:
    Ui::Widget *ui;

    double xuanDays, chunDays;
    QString days;
    bool shiftFlag;
};

#endif // WIDGET_H
