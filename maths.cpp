#include<bits/stdc++.h>
using namespace std;
// int countDigit(long long n){
//     int cnt = 0;
//     while( n > 0){
//         int lastDigit = n % 10;
//         cnt = cnt + 1;
//         n = n /10;
//     }
//     return cnt;
// }
// int main(){
//     long long n;
//     cin >> n;
//     cout << countDigit(n);
//     return 0;


// int reverseDigit(long long n){
//     int rev = 0;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         n = n/10;
//         //first extract 0*10+3=3
//         //3+10+2=32
//         //32?*10+1=321
//         rev = (rev * 10) + lastDigit;
//         /* code */
//     }

//     return rev;
// } 

// int main(){
//     long long n;
//     cin >> n;
//     cout << reverseDigit(n);
//     return 0;
//  }

// bool palindrome(int n)
// {
//     // Write your code 
//     int original = n;
//     int rev = 0;
//     while(n > 0){
//         int lastDigit = n %10;
//         n = n/10;
//         rev = (rev*10)+lastDigit;
//     }
//     return rev == original;
// }

// int main(){
//     int n ;
//     cin >> n;

//     if(palindrome(n)){
//         cout << "true";
//     }
//     else{
//         cout << "false";
//     }
// }

// bool armstrong(int n){
//     int original = n;
//     int sum = 0;
//     while(n>0){
//         int lastdigit = n %10;
//         sum = sum + (lastdigit*lastdigit*lastdigit);
//         n = n/10;
//     }
//     return sum == original;
// }

int main(){
    int n ;
    cin >> n;
    for(int i = 1; i <=n;i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
}