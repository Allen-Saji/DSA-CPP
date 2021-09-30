#include<iostream>
using namespace std;

int largestSubarraySum( int arr[],int n){

int largest_Sum = 0;
    for(int i=0;i<n;i++){
        int x = arr[i];

        for(int j=i;j<n;j++){
            int y = arr[j];

        int subarraySum = 0;

        for(int k=i;k<j;k++){

        subarraySum += arr[k];     
        }
           largest_Sum = max(largest_Sum,subarraySum);
        }   
    }
    return largest_Sum;
}


int main(){

int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n = sizeof(arr)/sizeof(int);

cout<<largestSubarraySum(arr,n);

    return 0;
}
