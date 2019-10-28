#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void pseudorand(int a, int b);

void pseudorand(int a, int b){
    int num = a+rand()%((b+1)-a);
    cout << num << endl;
}

int main(){
    pseudorand(2,4);
    return 0;
}