#include<iostream>
using namespace std;

int getIthBit(int n , int i ){
    int mask = (1<<i);
    return (n & mask)>0?1:0;
}

int clearIthBit(int &n , int i){
    int mask = ~(1<<i);
    n = n & mask;
    return n;
}

void setIthBit(int &n ,int i){
    int mask = (1<<i);
    n = (n|mask);
}

void updateIthBit(int &n , int i , int v){
    clearIthBit(n,i);
    int  mask = (1<<i);
    n = (n|mask);
}

void clearLastIbits(int &n,int i){
    int mask = (-1<<i);
    n = (n&mask);
}

void clearBitsInRange(int &n,int j,int i){
    int a = ((~0)<<j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = mask&n;
}

int main(){

int n,i,v,j;
cout<<"Enter n,j and i: ";
cin>>n>>j>>i;

// cout<<getIthBit(n,i);
// cout<<clearIthBit(n,i);
// setIthBit(n,i);
// cout<<n<<endl;
// updateIthBit(n , i  , v);
// cout<<n<<endl;
    // clearLastIbits(n,i);
    // cout<<n;
    clearBitsInRange(n,j,i);
    cout<<n;

    return 0;
}
