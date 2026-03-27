//reverse an array using two pointer

#include<bits/stdc++.h>
using namespace std;

void f(int l, int r, int arr[]){
    if(l>=r){
        return;
    }
    else{
        swap(arr[l],arr[r]);
        f(l+1 , r-1, arr);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin >> arr[i];
    }
    f(0,n-1,arr);
    for(int i =0 ; i<n;i++){
        cout << arr[i] << " ";
    }
}




#include<bits/stdc++.h>   // includes all standard libraries
using namespace std;

// Recursive function to reverse array using two pointers
void f(int l, int r, int arr[]){
    
    // 🔴 Base condition:
    // When left pointer crosses or meets right pointer
    // it means array is already reversed
    if(l >= r){
        return;  // stop recursion
    }
    else{
        // 🔄 Swap elements at left and right positions
        // Example: arr[0] ↔ arr[n-1]
        swap(arr[l], arr[r]);

        // 👉 Move towards center:
        // left pointer moves forward (l+1)
        // right pointer moves backward (r-1)
        f(l+1 , r-1, arr);
    }
}

int main(){
    int n;
    cin >> n;   // take size of array

    int arr[n]; // create array of size n (VLA - works in GCC)

    // 📥 Input elements into array
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    // 🚀 Call recursive function
    // Start with first index (0) and last index (n-1)
    f(0, n-1, arr);

    // 📤 Print reversed array
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
}
