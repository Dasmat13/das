#include<bits/stdc++.h>
using namespace std ;

int f(int number , int a[],int n){
    int cnt = 0;
    for(int i =0 ; i< n; i++){
        if(a[i] == number){
            cnt = cnt + 1;
        }
        
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i< n; i++){
        cin >> arr[i];
    }

    int number;
    cin >> number;
    int result = f(number, arr,n);
    cout << "the number " << number << " occurs: " << result << endl;

    return 0;


}

#include<bits/stdc++.h>   // includes all standard C++ libraries (iostream, vector, etc.)
using namespace std;      // avoids writing std:: before cout, cin, etc.


// ================= FUNCTION DEFINITION =================

// Function to count how many times 'number' appears in array
int f(int number , int a[], int n){

    int cnt = 0;              // variable to store count of occurrences (initially 0)

    // loop through the entire array
    for(int i = 0; i < n; i++){

        // check if current element is equal to the given number
        if(a[i] == number){

            cnt = cnt + 1;    // if match found, increase count by 1
        }
    }

    return cnt;   // return total count after checking all elements
}


// ================= MAIN FUNCTION =================

int main(){

    int n;              // variable to store size of array
    cin >> n;           // input the size

    int arr[n];         // declare array of size n (stores elements)

    // loop to take input of array elements from user
    for(int i = 0; i < n; i++){
        cin >> arr[i];  // store each element in array
    }

    int number;         // variable to store the number we want to search
    cin >> number;      // input the number

    // call function f() and pass:
    // number → value to find
    // arr → array
    // n → size of array
    int result = f(number, arr, n);

    // print how many times the number appears
    cout << "the number " << number 
         << " occurs: " << result << endl;

    return 0;   // program ends successfully
}