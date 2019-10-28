//Escriba un programa que genere 10 000 000 de permutaciones pseudoaleatorias de los 6
//primeros números naturales e imprima cuántas de ellas están ordenadas.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){

    int naturales[] = {0,1,2,3,4,5};
    const size_t n = sizeof naturales / sizeof *naturales;
    const int N = 10000000;
    int i, cont;

    for(i=0; i < N; i++){

        random_shuffle(naturales, naturales+n);

        if(naturales[0]==0 && naturales[1]==1 && naturales[2]==2 && naturales[3]==3 && naturales[4]==4 && naturales[5]==5) cont++;
    }
    cout << cont <<endl;
    return 0;
}