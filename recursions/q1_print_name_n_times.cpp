#include<bits/stdc++.h>
using namespace std;

//print names n times using recursion

void name(int i , int n){
    //.....................
    if(i>n){
        return;
    }
    //.......................base condition
    else{
        cout << "dasmat" <<endl;
        name(i+1,n);

    }
}

int main(){
    int n;
    cin >> n;
    name(1,n);
}