#include <iostream>
#include <algorithm>
#include <vector>
#include "cronometro.h"
#include "Practica3.burb.cpp"
#include "Practica3.selec.cpp"
#include "Practica3.inser.cpp"
using namespace std;

template <typename T>
void generate_random_vector(vector<int> A, int i) {
    int k = A.size();
    for( int j = 0 ; j < i ; ++j ) {
        A.push_back( k + j );
    }
}

int main(){

    cronometro burb, selecc, insercc;
    vector<int> B,S,I;

    for(int b=1000; b < 20001; b+= 1000){
        generate_random_vector(B,1000);


    }
}
