#include<bits/stdc++.h>
using namespace std;

int main(){

    //first we have to declare an array 

    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i <n ; i++){
        cin >> arr[i];
    }

    //second we have to make a hash array for pre compute and when it find the same element we have to increase the hash array element by+1

    // in hash array we have to declare the size of hash array and initilize with 0 for all element 

    int hash[13] = {0};
    for(int i = 0 ; i < n ; i++){
        hash[arr[i]] += 1;
    }


    //in third step we have to fetch the quaries by using while loop (q--) so it can go like 5 , 4 ,3,2,1

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << "the number " << number << " " << "occurs: " << hash[number] << endl;
    }

    return 0;
}

#include<bits/stdc++.h>   // includes all standard C++ libraries
using namespace std;

int main(){

    // ================= STEP 1: INPUT ARRAY =================

    int n;                  // variable to store size of array
    cin >> n;               // take input for size

    int arr[n];             // declare array of size n

    // loop to take input of array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];      // store each element in array
    }


    // ================= STEP 2: HASHING (PRE-COMPUTATION) =================

    // we create a hash array to store frequency of elements
    // size is 13 → means we assume values will be from 0 to 12
    // all values are initialized to 0
    int hash[13] = {0};

    // loop through original array
    for(int i = 0; i < n; i++){
        // use array value as index and increase its count
        // example: if arr[i] = 5 → hash[5]++
        hash[arr[i]] += 1;
    }


    // ================= STEP 3: PROCESS QUERIES =================

    int q;                  // number of queries
    cin >> q;               // take input for number of queries

    // loop runs q times (q-- decreases q after each iteration)
    while(q--){

        int number;         // number to find frequency of
        cin >> number;      // input the query number

        // print how many times 'number' appeared in array
        // we directly access it using hash array
        cout << "the number " << number 
             << " occurs: " << hash[number] << endl;
    }


    // ================= END OF PROGRAM =================
    return 0;
}