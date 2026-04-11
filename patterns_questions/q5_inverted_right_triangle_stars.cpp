#include<bits/stdc++.h>
using namespace std;

// Pattern 5: Inverted Right-Angled Triangle of Stars
// Output (n=4):
// * * * *
// * * *
// * *
// *

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for(int j = 0; j < n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
