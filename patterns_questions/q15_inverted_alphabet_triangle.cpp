#include<bits/stdc++.h>
using namespace std;

// Pattern 15: Inverted Alphabet Triangle (ABCD, ABC, AB, A)
// Output (n=4):
// A B C D
// A B C
// A B
// A

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        for(char ch = 'A'; ch <= 'A' + n - i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
