#include <iostream>
using namespace std;

bool validMountain(int arr[],int size){
    if (size < 3){
        return false;
    }
    int i=0;
    // Checking for The increment Order
    while(i<size-1 && arr[i]<arr[i+1]){
        i++;
    }
    // now check that if array finish without decrement order it will return false
    if(i == 0 && i == size-1){
        return false;
    }
    // now check for decrement order

    while(i<size-1 && arr[i]>arr[i+1]){
        i++;
    }
    return i == size-1;

}   




int main(){
   int arr[5]={0,1,2,4,0};
   int size=sizeof(arr)/sizeof(arr[0]); 
   if (validMountain(arr,size)){
    cout<<"Valid Mountain";
   }
   else{
    cout<<"Not Valid Mountain";
   }
}