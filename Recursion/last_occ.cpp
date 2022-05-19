#include<iostream>
using namespace std;

int lastOcc(int arr[],int n,int key){
    //base case
    if(n==0){
        return -1;
    }
    //rec case
    int subIndex = lastOcc(arr+1,n-1,key);
    if(subIndex==-1){
        if(arr[0]==key){
            return 0;
        }else{
            return -1;
        }
    }else{
        return subIndex+1;
    }
}

int main(){

int arr[] = {1,2,4,3,5,7,3,8};
int n = sizeof(arr)/sizeof(int);
int key;
cout<<"Enter the key to be sarched: ";
cin>>key;

cout<<lastOcc(arr,n,key)<<endl;

    return 0;
}
