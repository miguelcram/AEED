#include <iostream>
#include <cstdlib>
using namespace std;
void pseudorand(int a, int b);

void pseudorand(int a, int b){
    double num = a+rand()/((b+1)-a);
    cout << num << endl;
}

int main(){
    pseudorand(2,10);
    return 0;
}