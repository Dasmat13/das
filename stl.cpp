//pair
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {5,2,8,1,3};

    sort(arr, arr+5 ,greater<int>());

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

}
// int main(){
//     pair<int,int> p = {1,3};
//     cout << p.first << " " << p.second;
//     cout << endl;
//     pair<int, pair<int,int>> q ={1,{3,5}};
//     cout << q.first << " " << q.second.first << " " << q.second.second;
//     cout << endl;
//     pair<int,int> arr[] = { {1,2},{3,4},{5,6}};
//     cout << arr[0].first;
//     cout << endl;
//     cout << arr[0].second;
//     cout << endl;
//     cout << arr[1].first;
//     cout << endl;
//     cout << arr[1].second;
//     cout << endl;
//     cout << arr[2].first;
//     cout << endl;
//     cout << arr[2].second;



// }

// void explinVector(){

//     vector<int> v;

//     v.push_back(1);
//     v.emplace_back(2);

//     vector<pair<int, int>>vec;

//     v.push_back({1,2});
//     v.emplace_back(1,2);

//     vector<int> v(5,100);

//     vector<int> v(5);

//     vector<int> v1(5,20);
//     vector<int> v2(v1);

//     vector<int>::iterator it = v.begin();

//     it++;
//     cout << *(it) << " ";

    
// }