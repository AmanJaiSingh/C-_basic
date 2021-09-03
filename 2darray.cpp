#include <bits/stdc++.h>

using namespace std;

// int main(){

//     int num[3][2]={
//         {1,2},
//         {3,4},
//         {5,6}

//     };

//     for(int i=0; i<3;i++){
//         for(int j =0; j< 2;j++){
//             cout << num[i][j];
//         }
//         cout << endl;
//     }
//     string nums[11]={"even","one","two","three","four","five","six","seven","eight","nine","odd"};
    
//     cout << sizeof(nums)/ sizeof(nums[0]);

//     return 0;
// }
int main() {
    // Complete the code.
    int a,b;
    string nums[11]={"even","one","two","three","four","five","six","seven","eight","nine","odd"};
    cin >> a >> b;
    
    for( int i = a ; i<= b;i++){
        if (i<=9){
            cout << nums[i];
        }else{
            if(i%2==0){
                cout << nums[0];
            }else{cout << nums[10];}
        }
        cout  << endl;
    }
    
    
    
    
    return 0;
}