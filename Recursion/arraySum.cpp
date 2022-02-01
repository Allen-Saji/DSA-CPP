#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
    int sum = 0;
    //base case
    if(size<=0)
        return 0;

    //recursive case
    return arraySum(arr,size-1)+arr[size-1];

}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    cout<<"The sum of elements of array is: "<<arraySum(arr,size)<<endl;

    return 0;
}