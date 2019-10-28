#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void burbuja(vector<int> v);

// int main(){
//     vector<int> v={5,4,3,0,7,6,1,2};
//     burbuja(v);
//     return 0;
// }

void burbuja(vector<int> v){
    int i, n=8;

    for(i=0;i<n;++i){       //BURBUJA
        for(int j=0;j<n-1;++j){     // hasta j=7, que es j<n-1
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        }
    }

    //for(i=0; i<n; i++){
    //    cout << v[i] << endl;
    //}
}