#include<iostream>
using namespace std;

bool isPalindrome(string str,int start,int end){

    //base case
    if(start>end)
        return true;

    if(str[start]!=str[end])
        return false;

    //recursive case
    isPalindrome(str,start+1,end-1);
}

int main(){

    string str = "abba";
    int start = 0;
    int end = str.length()-1;

    isPalindrome(str,start,end);

    if(isPalindrome){
        cout<<"It's a palindrome"<<endl;
    }else{
        cout<<"It's not a palindrome"<<endl;
    }

    return 0;
}