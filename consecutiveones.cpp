#include <iostream>
using namespace std;

void consecutiveone(int array[],int size){
    int t=0;
    int c=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                t+=1;
            }
                else{
                    break;
            }
        }

    }
    cout<<t<<endl;
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
    consecutiveone(array,size);

}