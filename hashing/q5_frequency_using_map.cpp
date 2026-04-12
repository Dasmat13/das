 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    //pre compute
    map<int, int> mapp;
    for(int i = 0 ; i < n ; i++){
        mapp[arr[i]]++;
    }
    for(auto it : mapp){
        cout << it.first << "->" << it.second << endl;

    }


    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int number;
        cin >> number;
        //fetch
        cout << mapp[number] << endl;
    }
    
 }




 #include<bits/stdc++.h>
using namespace std;

int main(){

    // ================= STEP 1: INPUT =================
    // Take size of array
    int n;
    cin >> n;

    int arr[n];   // declare array of size n

    // Input array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    // ================= STEP 2: PRE-COMPUTATION =================
    // Create a map to store frequency
    // key   → array element
    // value → count (frequency)
    map<int, int> mapp;

    // Traverse array and count frequency
    for(int i = 0; i < n; i++){
        mapp[arr[i]]++;   // increase count of arr[i]
    }


    // ================= STEP 3: PRINT MAP (OPTIONAL) =================
    // Print all elements with their frequency
    for(auto it : mapp){

        // it.first  → element (key)
        // it.second → frequency (value)
        cout << it.first << " -> " << it.second << endl;
    }


    // ================= STEP 4: QUERY PROCESS =================
    // Take number of queries
    int q;
    cin >> q;

    while(q--){

        int number;
        cin >> number;

        // Fetch frequency in O(log n)
        cout << mapp[number] << endl;
    }


    // ================= STEP 5: END =================
    return 0;
}


/*
================= ⚠️ MISTAKES =================

1. Using array hashing when values are large
   ❌ int hash[1000000] (may cause memory issue)
   ✅ use map instead

2. Assuming element exists
   mapp[number] will return 0 if not present (safe)

3. Forgetting that map is sorted
   Output will always be in ascending order of keys


================= 💡 TIPS =================

1. map stores keys in sorted order automatically

2. Access:
   mapp[x] → gives frequency
   If x not present → returns 0

3. Iteration:
   for(auto it : mapp)
   → easy way to traverse


================= 🚀 OPTIMIZATION =================

1. Time Complexity:
   Precompute: O(n log n)
   Query: O(log n)

2. Faster alternative:
   unordered_map<int, int> mp;

   for(int i = 0; i < n; i++){
       mp[arr[i]]++;
   }

   👉 Time:
      Precompute: O(n)
      Query: O(1) average

3. When to use what:
   map → when sorted order needed
   unordered_map → when speed needed


================= 🔥 INTERVIEW INSIGHT =================

If interviewer asks:
   "handle large values (up to 10^9)"

👉 Always use:
   map OR unordered_map

Array hashing will FAIL ❌

*/