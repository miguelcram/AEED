#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void seleccion(vector<int> v);

//int main(){
//     vector<int> v={5,4,3,0,7,6,1,2};
//     seleccion();
//     return 0;
//}

void seleccion(vector<int> v){

    int i, n=8;
    int min=0;

    for(i=0;i<n-1;++i){     // SELECCION
        min=i;
        for(int j=i+1; j<n; ++j){  // hasta j=8, que es j<n
            if(v[j]<v[min]) min=j;
        }
        swap(v[min],v[i]);
    }

    //for(i=0; i<n; i++){
    //    cout << v[i] << endl;
    //}
}