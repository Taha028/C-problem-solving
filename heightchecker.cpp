#include <iostream>
using namespace std;

int main(){
    int arr[6]={1,1,4,2,1,3};
    int array[6];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        array[i]=arr[i];

    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=array[i]){
            cout<<i<<endl;
  
        }
    }

}