#include <iostream>
using namespace std;

inline void rota(int& a, int& b, int& c)
{
    int t=a
    a=b;
    b=c;
    c=t;
}

inline void rota(int *a, int *b, int *c){
    //[...]
}