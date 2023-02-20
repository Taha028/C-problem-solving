#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    n1=3;
    n2=4;
    n3=3;
    int m1[3][4]={{1,2,3,1},{2,3,4,3},{4,5,6,0}};
    int m2[4][3]={{1,2,3},{2,3,4},{4,5,6},{4,5,7}};

    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }   

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        cout<<endl;
        }
    }


}