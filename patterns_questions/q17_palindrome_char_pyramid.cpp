#include<bits/stdc++.h>
using namespace std;

// Pattern 17: Palindrome Character Pyramid
// Output (n=3):
//    A
//   ABA
//  ABCBA
// ABCDCBA

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        // spaces
        for(int j = 0; j <= n-i-1; j++) cout << " ";
        // palindrome chars
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j <= 2*i+1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        cout << endl;
    }
}
