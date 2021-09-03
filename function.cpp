#include <iostream>

using namespace std;

void sayhi(string name){
    cout << "hello " << name <<" ";
}

double cube(double num){
    double result = num*num*num;
    return result;
}



int main(){

    sayhi("aman");
    double aman=cube(4);
    cout << aman;


    return 0;
}