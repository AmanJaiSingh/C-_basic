#include <bits/stdc++.h>

using namespace std;


int fuct1(int x){
    if(x>1){
        return x*fuct1(x -1); 
    }
}



int main(){

    int x=10;
    // cout << fuct1(x);
    int *p;
    p= new int [5];
    p[0]=3;
    p[1]=2;
    cout << &p;

    delete p;

    return 0;
}