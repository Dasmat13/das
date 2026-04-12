#include<bits/stdc++.h>
using namespace std;
 int main(){
    string s;
    cin >> s;
    //pre compute
    int hash[26] = {0};
    for(int i =0 ; i< s.size(); i++){
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch 
        cout << "the number of time " << c << " " << "comes: " << hash[c-'a'] << endl;
    }
    return 0;
 }

 #include<bits/stdc++.h>
using namespace std;

int main(){

    // ================= STEP 1: INPUT =================
    // Take input string
    string s;
    cin >> s;

    // ================= STEP 2: PRE-COMPUTATION =================
    // Create hash array of size 26 for lowercase letters (a–z)
    // Initialize all values to 0
    int hash[26] = {0};

    // Traverse the string
    for(int i = 0; i < s.size(); i++){

        // Convert character to index:
        // 'a' -> 0, 'b' -> 1, ..., 'z' -> 25
        // Increase count of that character
        hash[s[i] - 'a']++;
    }

    // ================= STEP 3: QUERY PROCESS =================
    // Take number of queries
    int q;
    cin >> q;

    while(q--){   // loop runs q times

        char c;
        cin >> c;

        // Fetch frequency in O(1)
        cout << "the number of time " << c 
             << " comes: " << hash[c - 'a'] << endl;
    }

    // ================= STEP 4: END =================
    return 0;
}


/*
================= ⚠️ MISTAKES =================

1. Using hash[c] instead of hash[c - 'a']
   ❌ Wrong: hash[c]
   ✅ Correct: hash[c - 'a']

2. Works ONLY for lowercase letters (a–z)
   If input has uppercase → wrong result

3. Out of bounds error if character is not between 'a'–'z'


================= 💡 TIPS =================

1. ASCII trick:
   'a' = 97, 'b' = 98
   So: index = char - 'a'

2. Always remember:
   index = s[i] - 'a'

3. Best for multiple queries (very fast lookup)


================= 🚀 OPTIMIZATION =================

1. If string has uppercase + lowercase:
   use:
       int hash[256] = {0};
       hash[s[i]]++;

2. If characters are unknown / mixed:
   use unordered_map:

       unordered_map<char, int> mp;
       for(char c : s){
           mp[c]++;
       }

3. Time Complexity:
   Precompute: O(n)
   Query: O(1)

*/