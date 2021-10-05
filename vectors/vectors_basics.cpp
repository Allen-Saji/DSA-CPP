#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int> arr = {1,2,3,4,5};

//Fill Constructor
// vector<int> arr(10,7);   //10 elements each being 7

//adds an element to the vector
arr.push_back(6);

//removes the last element from the vector
arr.pop_back();

//Print all the elements of the vector
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

//no. of elements of the vector
cout<<arr.size()<<endl;

//total capacity of the array
cout<<arr.capacity()<<endl;


    return 0;
}