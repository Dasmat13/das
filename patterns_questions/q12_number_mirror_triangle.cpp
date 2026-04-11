#include<bits/stdc++.h>
using namespace std;

// Pattern 12: Number Mirror Triangle
// Output (n=4):
// 1      1
// 12    21
// 123  321
// 12344321

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        // left numbers
        for(int j = 1; j <= i; j++) cout << j;
        // spaces in middle
        for(int j = 1; j <= 2*n-(i*2); j++) cout << " ";
        // right numbers (mirror)
        for(int j = i; j >= 1; j--) cout << j;
        cout << endl;
    }
}
