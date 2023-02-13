#include <iostream>
#include <cmath>
using namespace std;













//ARMSTRONG
// int main(){
//     int n;
//     n=153;
//     int rr=n;
//     int sum=0;
//     while(n>0){
//         int ll=n%10;
//         int mul=ll*ll*ll;
//         sum+=mul;
//         n=n/10;

//     }
//     if (sum==rr){
//         cout<<"Arm";
//     }
//     else{
//         cout<<"No";
//     }
 
// }











// when take mod it give the last digit of a no and n/10 is use b/c we have to remove the last digit 
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse;

}










// int main(){
//     int n;
//     cin>>n;
//     bool flag=0;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%2==0){
//             cout<<"non-prime"<<endl;
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"prime"<<endl;
//     }
// }