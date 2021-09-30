#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(char str[100]){

//start from the leftmost and rightmost part of the string
int r = strlen(str)-1;
int l = 0;

//comparing the string characters

while(r>l){

    if(str[l++]!=str[r--]){
        return false;
    }

}

return true;
}

int main(){
    
    char str[100];

    cin.getline(str,100);

    if(isPalindrome(str)){
        cout<<"Yes,the above string is a palindrome"<<endl;
    }else{
        cout<<"No, the above string is not a palindrome"<<endl;
    }




    return 0;


}