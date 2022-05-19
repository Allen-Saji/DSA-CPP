#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s, int e){
    int i = s;
    int mid = (s+e)/2;
    int j = mid+1;

    vector<int> temp;

    while(i<=mid and j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }

    //copying temp to main vector
    int idx = 0;
    for(int k=s;k<=e;k++){
        arr[k] = temp[idx++];
    }

    return;
}

void mergeSort(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //recursive case
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    return merge(arr,s,e);
}

int main(){
    vector<int> arr = {1,2,6,4,5,7};
    int s = 0;
    int e = arr.size()-1;
    mergeSort(arr,s,e);
    for(int i=0;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}