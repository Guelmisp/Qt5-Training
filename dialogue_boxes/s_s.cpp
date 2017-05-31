#include"s_s.h"

S_S::S_S() : QWidget(){

    button1 = new QPushButton ("Information", this);
    button1 -> move(60,70);
    connect(button1, SIGNAL(clicked()), this, SLOT(Message()));

}

void S_S :: Message(){

    QMessageBox::information(this, "Information", "Ola, este texto estava escondido");

}
