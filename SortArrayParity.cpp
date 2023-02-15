#include <iostream>
using namespace std;


void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    int array[5];
    int k =0 ;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            array[k]=arr[i];
            k++;

        }
        
    }

    for(int i=0;i<5;i++){
        if(arr[i]%2!=0){
            array[k]=arr[i];
            k++;

        }
        
    }
    print(array,5);
    
}