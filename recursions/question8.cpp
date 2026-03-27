//factorial of n using function
#include<bits/stdc++.h>
using namespace std;

int f(int i ){
    //if(i == 1 || i == 0 )
    if(i <= 1){
        return 1;
    }
    else{
        return i * f(i-1);
    }
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}
  