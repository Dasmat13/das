#include<bits/stdc++.h>
using namespace std;

// Pattern 4: Right Triangle with repeated row number
// Output (n=4):
// 1
// 22
// 333
// 4444

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}
