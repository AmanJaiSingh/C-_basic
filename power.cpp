#include<bits/stdc++.h>

using namespace std;

int power(int a, int b){
    int result = 1;

    for(int i = 0; i< b;i++){
        result = result* a;
    }


    return result;
}


int main(){

    cout << power(8,8);

    return 0;
}