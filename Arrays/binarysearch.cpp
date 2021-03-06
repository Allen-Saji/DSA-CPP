#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){

int s = 0;           //s-> start index
int e = n-1;        //e->end index
while(e>=s){
    int mid = (s+e)/2;

if(arr[mid] == key){
    return mid;
}
else if(arr[mid]>key){
    e = mid-1;
}
else{
    s = mid+1;
}

 }
 return -1;

}


int main(){

int arr[] = {10,20,30,45,60,75,80};
int n = sizeof(arr)/sizeof(int);

int key;
cout<<"Enter the key: ";
cin>>key;

int index = binary_search(arr,n,key);

if(index!=-1){
    cout<<key<<" is present at " <<index<<endl;
}
else{
    cout<<key<<" is NOT Found!"<<endl;
}



    return 0;
}
