#include<QApplication>
#include"s_s.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    S_S MyTest;
    MyTest.show();
    return app.exec();
}
