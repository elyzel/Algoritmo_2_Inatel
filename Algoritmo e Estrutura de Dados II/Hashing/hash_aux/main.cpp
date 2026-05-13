#include<iostream>
#include "hashing.h"
using namespace std;

int main()  {
    
    int k, m, x;
    
    while(cin >> k >> m && k != 0 && m != 0)    {
        x = hash_aux(k,m);
        cout << x << endl;
    }
    
     return 0;
}