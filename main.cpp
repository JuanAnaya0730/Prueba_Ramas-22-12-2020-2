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
    cout << "Imprimir solo los numeros de la cadena original" << endl;
    for(int var=0; var<TAM; ++var){
        if(A[var]>='0' && A[var]<='9'){
            cout << A[var] << endl;
        }
    }

    //MainWindow w;
    //w.show();
    return a.exec();
}
