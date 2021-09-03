#include<iostream>

using namespace std;

class test{
    int a;
    static int b;
    public:
        void set(){
            a =0;
            b=0;
        }

    void inc(){
            a++;
            b++;
    }

    void display(){
        cout << "a=" << a << "\t" << "b=" << b << endl;
    }

};
int test ::b;

int main(){
    test obj1,obj2;
    obj1.set();
    obj2.set();
    obj1.inc();
    obj2.inc();
    obj1.display();
    obj2.display();
}