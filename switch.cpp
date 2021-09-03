#include<bits/stdc++.h>

using namespace std;

string getDayOfWeek(int num){
    string dayName;
    switch (num)
    {
    case 0:
        dayName="Sunday";
        break;
    case 1:
        dayName="Monday";
        break;
    case 2:
        dayName="Tuesday";
        break;
    case 3:
        dayName="Wednesday";
        break;
    case 4:
        dayName="Thusday";
        break;
    case 5:
        dayName="Friday";
        break;
    case 6:
        dayName="Saturday";
        break;
    
    default:
        dayName="Invalid Day Number";
        break;
    }

    return dayName;
}

int main(){

    cout << getDayOfWeek(8);
    return 0;
}