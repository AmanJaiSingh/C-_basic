#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int a;
  cin>>a;
  int notes[]={2000,500,100,50,20,10,5,2,1};
  int k=a;
  for(int i=0;i<9;i++){
     if(k/notes[i]>=1){
        cout<<k/notes[i]<<" ";
       	k=k%notes[i];
       
     }else{
       cout<<"0 ";
     }
  }
  return 0;
}