#include<bits/stdc++.h>
using namespace std;

//Read n strings and print the largest string.Each string can contain upto 1000 characters.

int main(){

    int n;
    cin>>n;

    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_length = 0;

    while(n--){

        cin.getline(sentence,1000);
        int len = strlen(sentence);

        if(len>largest_length){
            largest_length = len;
            strcpy(largest,sentence);
        }

    }
    cout<<"The largest string is: "<<largest<<endl;

return 0;
}