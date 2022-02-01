#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    //base case
    if(size==0)
        return false;

    if(arr[0]==key)
        return true;
    //recursive case
    return linearSearch(arr+1,size-1,key);

}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int key = 9;

    if(linearSearch(arr,size,key)){
        cout<<"True!"<<endl;
    }else{
        cout<<"False!"<<endl;
    }
}