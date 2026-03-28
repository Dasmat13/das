//check if the string is palindrome or not 

#include<bits/stdc++.h>
using namespace std;

bool f(int i , string &s){
    if(i >= s.size() /2){
        return true;
    }
    if(s[i] != s[s.size() - i - 1]){
        return false;
    }
    else{
        return f(i+1,s);
    }
}

int main(){
    string s;
    cin >> s;
    cout << f(0,s);
    return 0;
}
  


// Check if a string is palindrome or not using recursion

#include<bits/stdc++.h>   // 📚 includes all standard libraries
using namespace std;

// 🔁 Recursive function
// i → current index (starting from 0)
// s → reference to string (no copy, efficient)
bool f(int i , string &s){

    // 🔴 Base Condition:
    // When i reaches middle of string
    // means all characters matched successfully
    if(i >= s.size() / 2){
        return true;   // ✅ string is palindrome
    }

    // ❌ If mismatch found
    // compare current character with its mirror character
    // s[i] ↔ s[n-i-1]
    if(s[i] != s[s.size() - i - 1]){
        return false;  // ❌ not a palindrome
    }
    else{
        // 👉 If characters match, move forward
        // check next pair
        return f(i+1, s);
    }
}

int main(){
    string s;
    cin >> s;   // 📥 input string (no spaces)

    // 🚀 Call function starting from index 0
    // It returns true (1) or false (0)
    cout << f(0, s);

    return 0;
}