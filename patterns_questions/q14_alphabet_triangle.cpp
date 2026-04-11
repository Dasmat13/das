#include<bits/stdc++.h>
using namespace std;

// Pattern 14: Alphabet Triangle (A, AB, ABC...)
// Output (n=4):
// A
// A B
// A B C
// A B C D

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
