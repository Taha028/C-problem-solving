#include <iostream>
using namespace std;
#include <set>

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    set<int> uniqueElements;
    for(int i=0;i<n;i++){
        uniqueElements.insert(arr[i]); 

    }
    for(int i=1;i<n;i++){
        cout<<i<<" ";
    }
}








