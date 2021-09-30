#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){

for(int times=1;times<=n-1;times++){
for(int j=0;j<=n-2;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
}
}

}


int main(){

int arr[]={-2,-1,3,4,-7,8};
int n = sizeof(arr)/sizeof(int);

bubble_sort(arr,n);

for(auto x:arr){
cout<<x<<",";
}

    return 0;
}


