#include<iostream>
using namespace std;

int Fib(int n){

  if(n==0 or n==1){
      return n;
  }

  int f1 = Fib(n-1);
  int f2 = Fib(n-2);

    return f1+f2;
}

int main(){
    int n;
    cin>>n;

    cout<<Fib(n)<<endl;
  
}