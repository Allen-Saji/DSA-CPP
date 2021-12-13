#include<iostream>
using namespace std;

//Replace Bits in N by M
/* You are given two 32-bit numbers N and M , and two bit positions i and j.
    Write a method to set all bits between i and j in N equal to M.
    (M becomes a substring of N loacationed at and starting ata j.)*/

void clearBitsInRange(int &n,int i,int j){
    int a = ((~0)<<j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = mask&n;
}

void replaceBits(int &n,int i,int j,int m){
    clearBitsInRange(n,i,j);
    int mask = (m<<i);
    n = (mask|n); 
}

int main(){

int n,i,m,j;
cout<<"Enter n,i,j and m: ";
cin>>n>>i>>j>>m;

replaceBits(n,i,j,m);
cout<<n<<endl;

    return 0;
}