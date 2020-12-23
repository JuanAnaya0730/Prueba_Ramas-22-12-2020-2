#include "mainwindow.h"
#include <QApplication>
#include <iostream>

using namespace std;

#define TAM (int)10

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    char A[TAM] = {"AB11CD447"};
    char numeros[TAM] = {0};
    int contDig = 0;

    cout << "Imprimir solo los numeros de la cadena original" << endl;
    //int numero = 0;
    //int contadorDigitos = 0;

    for(int var = TAM - 1; var < TAM; ++var){
        if(A[var]>='0' && A[var]<='9'){
            numeros[contDig++] = A[var];
        }
    }

    for(int var = contDig-1; var >= 0; --var){
        cout << numeros[var] << endl;
    }

    //MainWindow w;
    //w.show();
    return a.exec();
}
