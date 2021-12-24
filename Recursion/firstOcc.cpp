#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    //base case
    if(n==0){
        return -1;
    }
    //rec case
    if(arr[0]==key){
        return 0;
    }
    int subIndex = firstOcc(arr+1,n-1,key);
    if(subIndex!=-1){
        return subIndex+1;
    }
    return -1;
}

int main(){

int arr[] = {1,2,5,4,6,3,7};
int n = sizeof(arr)/sizeof(int);
int key;
cout<<"Enter the key to be searched: ";
cin>>key;
cout<<firstOcc(arr,n,key)<<endl;;

    return 0;
}