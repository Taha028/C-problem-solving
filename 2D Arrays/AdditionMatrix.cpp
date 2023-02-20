#include <iostream>
using namespace std;

int main(){
    int r=2;
    int c=2;
    int arr[2][2]={{1,2},{2,3}};
    int array[2][2]={{4,5},{5,6}};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]+array[i][j]<<endl;
        }
    }

}