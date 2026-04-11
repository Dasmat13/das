#include<bits/stdc++.h>
using namespace std;

// Pattern 10: Hourglass (Triangle + Inverted Triangle of Stars)
// Output (n=4):
// *
// * *
// * * *
// * * * *
// * * * *
// * * *
// * *
// *

int main(){
    int n;
    cin >> n;
    // Upper half (increasing)
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    // Lower half (decreasing)
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++) cout << "* ";
        cout << endl;
    }
}
