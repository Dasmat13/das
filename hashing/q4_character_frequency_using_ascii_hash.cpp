#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   cin >> s;
   
   //pre compute
   int hash[256] = {0};
   for(int i = 0; i<s.size();i++){
    hash[s[i]]++;
   }

   int query;
   cin >> query;
   while (query--)
   {
    /* code */
    char c;
    cin >> c;
     cout << "the number of time " << c 
             << " comes: " << hash[c] << endl;
    }

   }
   

#include<bits/stdc++.h>
using namespace std;

int main(){

    // ================= STEP 1: INPUT =================
    // Take input string
    string s;
    cin >> s;

    // ================= STEP 2: PRE-COMPUTATION =================
    // Create hash array of size 256 (covers all ASCII characters)
    // Initialize all values to 0
    int hash[256] = {0};

    // Traverse the string
    for(int i = 0; i < s.size(); i++){

        // Directly use character as index
        // Example: 'a' → ASCII 97 → hash[97]++
        hash[s[i]]++;
    }

    // ================= STEP 3: QUERY PROCESS =================
    // Take number of queries
    int query;
    cin >> query;

    while(query--){

        char c;
        cin >> c;

        // Fetch frequency in O(1)
        cout << "the number of time " << c 
             << " comes: " << hash[c] << endl;
    }

    // ================= STEP 4: END =================
    return 0;
}


/*
================= ⚠️ MISTAKES =================

1. Forgetting array size
   ❌ int hash[26] → only for lowercase
   ✅ int hash[256] → supports all ASCII

2. Using wrong indexing
   ❌ hash[c - 'a'] (not needed here)
   ✅ hash[c]

3. Negative index issue
   If char is signed → may cause problem
   Safe version:
       hash[(unsigned char)s[i]]++;


================= 💡 TIPS =================

1. ASCII mapping:
   'a' = 97, 'A' = 65, '0' = 48

2. Works for:
   ✔ lowercase
   ✔ uppercase
   ✔ digits
   ✔ symbols

3. Direct indexing makes it faster and simple


================= 🚀 OPTIMIZATION =================

1. Best approach for character frequency → O(1) query

2. If input includes Unicode (rare in CP):
   use unordered_map<char, int>

3. Time Complexity:
   Precompute: O(n)
   Query: O(1)

4. Memory:
   Fixed 256 → very efficient


================= 🔥 INTERVIEW INSIGHT =================

This is better than:
   hash[26]

Because interviewer may give:
   "AaBb123!!"

Only this approach will handle all cases 💯

*/