#include<iostream>
using namespace std;

void printSubarray( int arr[],int n){

    for(int i=0;i<n;i++){
        int x = arr[i];

        for(int j=i;j<n;j++){
            int y = arr[j];

        for(int k=i;k<j;k++){
             cout<<arr[k]<<",";
             
        }
           cout<<endl;
        }
        
    }
}


int main(){

int arr[]={10,20,30,40,50,60,70,80};
int n = sizeof(arr)/sizeof(int);

printSubarray(arr,n);

    return 0;
}
