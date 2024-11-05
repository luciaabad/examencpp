//
// Created by Lucia Abad on 5/11/24.
//

#include "identificacion.h"
#include <iostream>
using namespace std;

void identificacion() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero > 0 ) {
        cout << "el numero es positivo" << endl;

    } else if (numero < 0) {
        cout << "el numero es negativo" << endl;
    }else {
        cout << "El numero es 0" << endl;
    }
}




