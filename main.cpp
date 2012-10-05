#include <QApplication>
#include "example.h"

int main(int argc, char *argv[]){
        QApplication app(argc,argv);
        Example w;
        w.show();
        return app.exec();
}
