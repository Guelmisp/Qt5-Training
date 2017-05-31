#ifndef S_S_H
#define S_S_H

#include<QApplication>
#include<Qtwidgets>

class S_S : public QWidget{

    Q_OBJECT
public:
    S_S();
public slots:
    void Message();
private:
    QPushButton *button1;

};

#endif // S_S_H
