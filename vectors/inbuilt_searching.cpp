#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){

vector <int> arr = {1,2,3,4,5,6,7,8,9};

cout<<"Enter the Key: ";
int key;
cin>>key;

vector<int>::iterator it = find(arr.begin(),arr.end(),key);

if(it!=arr.end()){
    cout<<"The element is present at index "<<it-arr.begin()<<endl;
}
else{
    cout<<"Element is not present in the given array."<<endl;
}


    return 0;
}