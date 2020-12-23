#include "mainwindow.h"
#include <QApplication>
#include <iostream>

using namespace std;

#define TAM (int)10

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char A[TAM] = {"AB11CD44"};

    for(int var=0; var<TAM; ++var){
        cout << A[var] << endl;
    }

    //MainWindow w;
    //w.show();
    return a.exec();
}
