#include<iostream>
using namespace std;

void print(int arr[][10],int n,int m){

//4 variables
int start_row = 0;
int end_row = n-1;
int start_column = 0;
int end_coloumn = m-1;

//Outer Loop (Traverse array boundary)
while(start_column<=end_coloumn and start_row<=end_row){

    ///Start Row
    for(int col = start_column;col<=end_coloumn;col++){
        cout<<arr[start_row][col]<<" ";
    }

    //End column
    for(int row = start_row+1;row<=end_row;row++){
        cout<<arr[row][end_coloumn]<<" ";
    }

    //End row
    for(int col = end_coloumn-1;col>=start_column;col--){
        //To avoid duplication
        if(start_row == end_row){
            break;
        }
        cout<<arr[end_row][col]<<" ";
    }

    //Start Col
    for(int row = end_row -1;row >=start_row+1;row--){
        // To avoid duplication
        if(start_column == end_coloumn){
            break;
        }
        cout<<arr[row][start_column]<<" ";
    }

//update conditions
start_row++;
start_column++;
end_row--;
end_coloumn--;

}


}

int main(){

//Print in spiral form

int arr[][10] = {{1,2,3,4},
                    {12,13,14,5},
                    {11,16,15,6},
                    {10,9,8,7}
};

int n=4,m=4;

print(arr,n,m);


    return 0;
}