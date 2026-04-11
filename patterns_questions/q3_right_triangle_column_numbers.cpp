#include<bits/stdc++.h>
using namespace std;

// Pattern 3: Right Triangle with column numbers (1 2 3...)
// Output (n=4):
// 1
// 12
// 123
// 1234

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
