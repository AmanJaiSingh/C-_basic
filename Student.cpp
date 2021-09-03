#include <bits/stdc++.h>

using namespace std;

class Student{
    private:
        double gpa;
    public:
        string name;
        string major;
        Student(string aName, string aMajor , double aGpa){
            name=aName;
            major=aMajor;
            setGpa(aGpa);
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }

        void setGpa(double agpa){
            if(agpa<=10 & agpa >=0){
            gpa=agpa;
            }else{
                gpa=-1;
            }
        }
        double getGpa(){
            return gpa;
        }

    
};

int main(){
    Student student1("Aman","CSE",2.4);
    Student student2("Chhavi","CSE",9.4);
    student1.setGpa(-9);
    cout << student2.getGpa() << endl;
    cout << student1.getGpa() << endl;
    return 0;
}