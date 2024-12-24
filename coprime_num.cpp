#include<bits/stdc++.h>
using namespace std;

void coprime(int a,int b){
  int i=min(a,b);
  while(i!=1){
    if(a%i==0 && b%i==0){
      cout<<"Non Coprime"<<endl;
      return;
    }
    i--;
  }
  cout<<"Coprime"<<endl;
}

int main(){
  coprime(7,2);
  return 0;
}