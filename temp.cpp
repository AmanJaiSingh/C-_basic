#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int great(int a,int b , int c){
  int d= a;
  if(d<b){d=b;}
  if(d<c){d=c;}
  
  return d;
}

int main()
{
  int a,b,c;
  cin >> a >> b>> c;
  cout << great(a,b,c);
   return 0;
}