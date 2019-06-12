#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>

class mywindow : public QWidget
{
    Q_OBJECT
    public:
    mywindow();

    private:
    QLabel *_label;
    QPushButton *_btn;
    QVBoxLayout *_vlayout;
    QLineEdit *_edit;


    signals:

    public slots:
    void edittextfrominput();
};

#endif // MYWINDOW_H
