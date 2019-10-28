#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrar(int array[], int max);
void Dados(int min, int max, int run);

void Dados(int min, int max, int run){
    //srand(time(NULL));
    int distribucion[max];
    int num, i;
    
    for(i=0; i<max; i++){
        distribucion[i]=0;
    }
    
    for(int i=0; i<run; i++){
        num = min+rand()%((max+1)-min);
        distribucion[num-1]++;
    }

    mostrar(distribucion, max);
}

void mostrar(int array[], int max){

    for(int i=0; i<max; i++){
        cout << "Numero " << i+1 << ":" << array[i] << " " << endl;
    }
}

int main(){
    Dados(1, 6, 10000000);
    return 0;
}