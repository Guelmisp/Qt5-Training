#include"s_s.h"

S_S::S_S() : QWidget(){

    button1 = new QPushButton ("Information", this);
    button1 -> move(60,70);
    connect(button1, SIGNAL(clicked()), this, SLOT(Message()));

}

void S_S :: Message(){

   bool ok;
    QString password = QInputDialog::getText(this, "password", "Digite a senha: ", QLineEdit::Password, QString(), &ok);
    if (ok && !password.isEmpty()){

        QMessageBox::information(this, "Password Validated", "your password has been saved");

    }
    else {
        QMessageBox::information(this, "error", "Password incorrect");

    }

}
