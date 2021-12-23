//function to check if a array is sorted

#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    //base case
    if(n==1 || n==0){
        return true;
    }
    //rec case
    if(arr[0]<=arr[1] && isSorted(arr+1,n-1)){
        return true;
    }
    return false;
}

//another method
bool isSortedTwo(int arr[],int i,int n){
    if(i == n-1){
        return true;
    }

    if(arr[i]<=arr[i+1] and isSortedTwo(arr,i+1,n)){
        return true;
    }
    return false;
}

int main(){

int arr[] = {1,2,4,3,5,6};
int n = sizeof(arr)/sizeof(int);
int i = 0;

cout<<isSorted(arr,n)<<endl;  //0->false    1->true
cout<<isSortedTwo(arr,i,n)<<endl;
    return 0;
}