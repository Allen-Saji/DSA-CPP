#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector< vector<int> > arr = {     //Every row is a vector
        {1,2,3},
        {4,5,6},
        {7,8,9,10}
    };

arr[0][0] += 10;    //updating the first element
   
   for(int i=0;i<arr.size();i++){
       for(int number : arr[i]){   //forEach loop
           cout<<number<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}