#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    cout << s.size()<< endl;
    
    //pre-compute
    map<char, int> has;
    for(int i = 0 ; i < s.size();i++){
        has[s[i]]++;
    }

    for(auto it : has){
        cout << it.first << "->" << it.second << endl;
    }

}