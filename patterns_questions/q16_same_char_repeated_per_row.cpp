#include<bits/stdc++.h>
using namespace std;

// Pattern 16: Same character repeated per row (A, BB, CCC...)
// Output (n=4):
// A
// B B
// C C C
// D D D D

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
