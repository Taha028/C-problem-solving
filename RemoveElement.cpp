#include <iostream>
using namespace std;

int main(){
    int originalArray[] = {1, 2, 3, 4, 5};
    int skipvalue = 2;
    int newArray[4];

    for (int i = 0, j = 0; i < 5; i++) {
        if (originalArray[i] != skipvalue) {
            newArray[j] = originalArray[i];
            j++;
        }
    }
    int size=sizeof(newArray)/sizeof(newArray[0]);
    for(int i=0;i<size;i++){
        cout<< newArray[i]<<" ";
    }

}