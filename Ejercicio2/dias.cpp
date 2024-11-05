//
// Created by Lucia Abad on 5/11/24.
//

#include "dias.h"
#include <iostream>
using namespace std;

void dias() {
    int dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Es lunes" << endl; break;
        case 2: cout << "Es martes" << endl; break;
        case 3: cout << "Es miercoles" << endl; break;
        case 4: cout << "Es jueves" << endl; break;
        case 5: cout << "Es viernes" << endl; break;
        case 6: cout << "Es sabado" << endl; break;
        case 7: cout << "Es domingo" << endl; break;
        default: cout << "ingrese un numero valido" << endl; break;

    }
}
