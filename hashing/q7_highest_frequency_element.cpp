#include<bits/stdc++.h>
using namespace std;

int main(){
    //take a array
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    } 

    //pre compute
    map<int , int> mapp;
    for(int i = 0 ; i < n; i++){
        mapp[arr[i]]++;
    }

    //finding the highest frequency 
    int maxFreq = 0;
    int element = 0;

    for(auto it : mapp){
        cout << it.first << "->" << it.second << endl;
    }

    for(auto it : mapp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            element = it.first;
        }
    }

    cout << "Highest occurring element: " << element << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}