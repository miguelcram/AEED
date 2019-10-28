//Escriba un programa que genere 10 000 000 de números pseudoaleatorios de precisión doble
//en el intervalo [0, 1] e imprima la media de los valores y = 4·√1−x² correspondientes a cada número x.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
void numeroIntervalo();

int main(){

    numeroIntervalo();

    return 0;
}

void numeroIntervalo(){

    srand(time(NULL));

    int i;
    float numf;

    for(i=0; i<10000000; i++){

        float num = (float)(rand()%101)/100.0;

        numf += 4.0 * sqrt(1.0 - pow(num, 2));
    }

    numf /= 10000000.0;
    cout << numf << endl;
}
