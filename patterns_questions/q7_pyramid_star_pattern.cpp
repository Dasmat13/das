#include<bits/stdc++.h>
using namespace std;

// Pattern 7: Pyramid / Centered Triangle of Stars
// Output (n=4):
//    *
//   ***
//  *****
// *******

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
