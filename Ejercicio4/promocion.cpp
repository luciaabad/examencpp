//
// Created by Lucia Abad on 5/11/24.
//

#include "promocion.h"
#include <iostream>
using namespace std;


void promocion() {
    float p1;
    float p2;
    float p3;

    cout<<"Ingrese el valor de p1:"<<endl;
    cin>>p1;
    cout<<"Ingrese el valor de p2:"<<endl;
    cin>>p2;
    cout<<"Ingrese el valor de p3:"<<endl;
    cin>>p3;


    float precios [3] = {p1,p2,p3};

    sort(precios,precios+3);

    float total = precios[1] + precios[2];

    cout << "El total que debe pagar el cliente es: " << total << endl;


}