#include<iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end,int key){

    int  mid = start + (end-start)/2; 
    //base case
    if(start>end)
        return false;

    if(arr[mid]==key)
        return true;

    //recursive case
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key);
    }else{
        return binarySearch(arr,start,mid-1,key);
    }
        
}

int main(){

    int arr[] = {1,3,4,9,12,25,67,89,123};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    int key = 69;

    if(binarySearch(arr,start,end,key)){
        cout<<"True!"<<endl;
    }else{
        cout<<"False!"<<endl;
    }

    return 0;
}