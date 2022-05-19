#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int s, int e){
    int pivot = v[e];
    int i = s-1;
    
    for(int j=s;j<e;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[e]);
    return i+1;
}

void quicksort(vector<int> &v, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //recursive case
    int p = partition(v,s,e);
    quicksort(v,s,p-1);
    quicksort(v,p+1,e);
}

int main(){
    vector<int> v = {3,7,1,2,-3,4,6,8,9,11};
    int n = v.size();
    quicksort(v,0,n-1);

    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}