#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include "cronometro.h"
#include "Practica3.burb.cpp"
#include "Practica3.selec.cpp"
#include "Practica3.inser.cpp"
using namespace std;

int main(){

    vector<int> v={1,2,3,4,5,6,7,8,9}, v1, v2, v3;
    cronometro burb, selecc, insercc;

    burb.activar();
    do{
        v1 = v;
        burbuja(v1);
    }while(next_permutation(v.begin(), v.end()));
    burb.parar();

    cout << "Burbuja tiempo: " << burb.tiempo() << endl;
    


    selecc.activar();
    do{
        v2=v;
        seleccion(v2);
    }while(next_permutation(v.begin(), v.end()));
    selecc.parar();

    cout << "Seleccion tiempo: " << selecc.tiempo() << endl;

    insercc.activar();
    do{
        v3=v;
        inserccion(v3);
    }while(next_permutation(v.begin(), v.end()));
    insercc.parar();

    cout << "Inserccion tiempo: " << insercc.tiempo() << endl;
    return 0;
}