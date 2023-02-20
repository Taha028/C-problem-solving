#include <iostream>
using namespace std;

int main(){
    int r=3;
    int c=2;
    int arr[3][2]={{1,2},{2,3},{4,5}};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }



}