#include <iostream>
using namespace std;

int main(){
    int r=3;
    int c=4;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row_start = 0;
    int row_end = r-1;
    int col_start = 0;
    int col_end = c-1;
    while(row_start<=row_end && col_start<=col_end){
        //for row_Start and printing col
        for(int col=col_start;col<col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        // because we have to print from second row
        row_start++;

        //for end col and printing row
        for(int row=row_start;row<row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        //Now We have to move backward in the end row 
        col_end--;
        if (row_start<=row_end){

        // for printing last line columns 
        for(int col=col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        }
        //Now goig Up in the row
        row_end--;
        if(col_start<=col_end){
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        }
        col_start++;


    }


}