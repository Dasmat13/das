#include<bits/stdc++.h>
using namespace std;

// Pattern 1: N x N Square of Stars
// Output (n=4):
// * * * *
// * * * *
// * * * *
// * * * *

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
