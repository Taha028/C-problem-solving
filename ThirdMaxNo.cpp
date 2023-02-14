#include <iostream>
using namespace std;

int main(){
    int arr[4]={1,2,5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
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
        if(i==2){
        cout<<arr[i]<<" ";}
    }

}