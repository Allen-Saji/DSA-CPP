#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

vector<int> v;
int n;
cout<<"Enter n: ";
cin>>n;

for(int i=0;i<n;i++){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    v.push_back(x); 
}

printVec(v);

return 0;

}


