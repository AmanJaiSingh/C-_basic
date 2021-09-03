#include <iostream>

using namespace std;
int main(){

    string color,pluralNoun,celebrity;

    cout << "Enter a color: ";
    getline(cin,color);
    cout << "Enter a Plural Noun: ";
    getline(cin,pluralNoun);
    cout << "Enter a Celebrity : ";
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun <<" are blue"<< endl;
    cout << "i love " << celebrity<< endl;




    return 0;
}