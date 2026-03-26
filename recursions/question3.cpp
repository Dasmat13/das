//print 1 to n in reverse order
#include<bits/stdc++.h>
using namespace std;

// void f(int i , int n){
//     //base condition
//     if(i > n){
//         return;
//     }
//     else{
//         cout << n-i << endl;
//         f(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     f(i,n)
// }
void f(int i, int n){   
    if(i <1){
        //here i is 10  
        return;
    }
    else{
         //here we taking i = 10 so it will decrease 10-1,10-2,10-3,10-4,10-5,10-6,10-7,10-8,10-9
        cout << i << endl;
        f(i-1,n);       
    }
}
int main(){
    int n;
    cin >> n;
    f(n,n);
}
