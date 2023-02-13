#include <iostream>
using namespace std;

void sortarray(int array[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                

            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
   }

}


int main(){
    int size;
    cin>>size;
   int array[size];
   for(int i=0;i<size;i++){
    cin>>array[i];
   }
   sortarray(array,size);
}