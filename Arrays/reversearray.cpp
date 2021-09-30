#include<iostream>
using namespace std;

void reverse_array(int arr[],int n ){
int s = 0;
 int e = n-1;
while(e>s){
    swap(arr[s],arr[e]);
    e -= 1;
    s += 1;
}
}

int main(){
    
    int arr[] = {1,4,6,8,9};
    int n = sizeof(arr)/sizeof(int);

for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverse_array(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}