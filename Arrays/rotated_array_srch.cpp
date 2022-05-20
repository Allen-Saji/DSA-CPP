#include<bits/stdc++.h>
using namespace std;

int arraySrch(vector<int> v , int s, int e, int key){

    while(s<=e){
        int mid = (s+e)/2;

        if(v[mid]==key){
            return mid;
        }

        if(v[s]<=v[mid]){
            if(key>=v[s] and key<=v[mid]){
            e = mid-1;
            }
            else{
            s = mid+1;
            }
        }
        else{
            if(key>=v[mid] and key<=v[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
    }
  return -1; 
}

int main(){
    vector<int> v = {4,5,6,7,0,1,2,3};
    int n = v.size()-1;
    int key = 4;
    cout<<arraySrch(v,0,n-1, key)<<endl;
}