//
// Created by Lucia Abad on 5/11/24.
//

#include "calificaciones.h"
#include <iostream>
using namespace std;

void calificaciones() {

    float calificacion;
    float suma = 0;
    int numeroejercicio = 8;
    cout << "Ingrese el numero la calificacion" << endl;


    for (int i = 1; i <= numeroejercicio; i++) {
        cout << "calificación del ejercicio " << i << ": ";
        cin >> calificacion;

        if (calificacion < 0 || calificacion > 10) {
            cout << "La calificación debe estar entre 0 y 10. Intenta nuevamente.\n";
            i--;
        } else {
            suma += calificacion;
        }
    }


    float promedio = suma / numeroejercicio;

    cout << "El promedio de las calificaciones es: " << promedio << endl;




}