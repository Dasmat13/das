#include<bits/stdc++.h>
using namespace std;

// Pattern 9: Diamond (Pyramid + Inverted Pyramid)
// Output (n=4):
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

int main(){
    int n;
    cin >> n;
    // Upper half (pyramid)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++) cout << " ";
        for(int j = 0; j < 2*i+1; j++) cout << "*";
        cout << endl;
    }
    // Lower half (inverted pyramid)
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2*n-(2*i+1); j++) cout << "*";
        cout << endl;
    }
}
