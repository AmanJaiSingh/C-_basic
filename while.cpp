#include<bits/stdc++.h>

using namespace std;

int main(){

    int x;
    cin >>  x;
    int i =1;

    while (i <=x){
        int j =1;
        while(j <=i){
            cout << "*";
            j++;
        }
        int k= 2*x-1 ;
        while(k >=2*i){
            cout << " ";
            k=k-1;
        }

        int h =1;
        while(h <=i){
            cout << "*";
            h++;
        }

        cout << endl;
    i++;
    }

    int num[5]={486,489,894,89,4562};
    int len = sizeof(num)/sizeof(num[0]);

    for(int i =0;i < len; i++ ){
        cout << num[i]<< endl;
    }

    return 0;
}
