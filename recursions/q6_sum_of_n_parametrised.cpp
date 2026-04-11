//dum of n numbers (parametrised)
#include<bits/stdc++.h>
using namespace std;

void f(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }
    else{
        f(i-1,sum+i);
    }
}

int main(){
    int n;
    cin >> n;
    f(n,0);
}
