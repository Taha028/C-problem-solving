#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int in;
    cin>>in;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==in and arr[j]==2*in){
                cout<<arr[i]<<","<<arr[j]<<endl;
                break;
        }

        }
    }
}