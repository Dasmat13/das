//print(1-n)
#include<bits/stdc++.h>
using namespace std;

void f(int i , int n){
    //base condition..........
    if(i > n){
        return;
    }
    //..................
    else{
        cout << i<< endl;
        f(i + 1, n);
    }


}

int main(){
    int n ;
    cin >> n;
    f(1,n);
}
