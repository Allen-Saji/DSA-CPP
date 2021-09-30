#include <iostream>
using namespace std;

int linear_search(int arr[] , int n , int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){

int arr[] = {1,2,3,4,5,6,7,8,9};
int n = sizeof(arr)/sizeof(int);
int key;
cout<<"Enter the Key: ";
cin>>key;

 int index = linear_search( arr,n,key);
 if(index!=-1){
     cout<<key<<" is present at index "<<index<<endl; 
 }else{
     cout<<key<<" is NOT Found! "<<endl;
 }

    return 0;
}