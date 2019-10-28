#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inserccion(vector<int> v);

// int main(){
//     vector<int> v={5,4,3,0,7,6,1,2};
//     inserccion();
//     return 0;
// }

void inserccion(vector<int> v){
    
    int i, n=8;
    int j=0;

    for(i=0;i<n;++i){
        j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
        }
    }
    
    //for(i=0; i<n; i++){
    //    cout << v[i] << endl;
    //}
}