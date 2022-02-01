#include<iostream>
using namespace std;

void reverseString(string &str,int start,int end){

    //base case
    if(start>end)
        return;

    swap(str[start],str[end]);
    start++;
    end--;

    //recursive case
    reverseString(str,start,end);

}


int main(){

    string str = "Allen";
    int start = 0;
    int end = str.length()-1; 

    cout<<str<<endl;
    reverseString(str,start,end);
    cout<<str<<endl;

    return 0;
}