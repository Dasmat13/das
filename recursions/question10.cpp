//reverse an array using one pointer

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n, int arr[]){
    if(i >= n/2){
        return;
    }
    else{
        swap(arr[i],arr[n-i-1]);
        f(i+1, n, arr);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    f(0,n,arr);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}




// Reverse an array using ONE pointer (recursion)

#include<bits/stdc++.h>   // 📚 Includes all standard libraries
using namespace std;

// 🔁 Recursive function
// i → current index (starting from 0)
// n → size of array
// arr[] → array to be reversed
void f(int i, int n, int arr[]){
    
    // 🔴 Base Condition:
    // Stop when i reaches middle of array
    // Because we already swapped all required elements
    if(i >= n/2){
        return;   // ⛔ stop recursion
    }
    else{
        // 🔄 Swap current element with its mirror element
        // Mirror index = (n - i - 1)
        // Example:
        // i = 0 → swap arr[0] with arr[n-1]
        // i = 1 → swap arr[1] with arr[n-2]
        swap(arr[i], arr[n-i-1]);

        // 👉 Recursive call:
        // Move to next index (i+1)
        // Continue swapping inner elements
        f(i+1, n, arr);
    }
}

int main(){
    int n;
    cin >> n;   // 📥 Input size of array

    int arr[n]; // 📦 Create array of size n (VLA - works in GCC)

    // 📥 Input elements into array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 🚀 Call recursive function
    // Start from index 0
    f(0, n, arr);

    // 📤 Print reversed array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}