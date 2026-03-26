#include<bits/stdc++.h>
using namespace std;

void print0(){
    int count = 0;
    cout << count << endl;
    count++;
    print0();
}
void print1(int count){
    if(count == 7){
        return ;
    }
    else{
        cout << count << endl;
        print1(count + 1);
    }
}

// void print2(){
//     if(count == 5){
//         return ;
//     }
//     else{
//         cout << count << endl;
//         count++;
//         print2();
//     }
//}

/*
🔁 PRINT n → 1 (REVERSE ORDER)

Method 1 (Simple Recursion):
- Print first, then call recursion
*/
print(i);
f(i-1);

/*
Method 2 (Backtracking):
- Go deep first, then print while coming back
*/
f(i+1);
print(i);

/*
🧠 Rule:
- Print BEFORE recursion → Reverse (n to 1)
- Print AFTER recursion → Reverse (using backtracking with i+1)
*/

/*
🔁 RECURSION PRINTING TEMPLATES

----------------------------------
1️⃣ Print 1 → n (Simple Recursion)
----------------------------------
void f(int i, int n){
    if(i > n) return;

    cout << i << " ";
    f(i+1, n);
}

Call: f(1, n)

----------------------------------
2️⃣ Print n → 1 (Simple Recursion)
----------------------------------
void f(int i, int n){
    if(i < 1) return;

    cout << i << " ";
    f(i-1, n);
}

Call: f(n, n)

----------------------------------
3️⃣ Print 1 → n (Backtracking)
----------------------------------
void f(int i, int n){
    if(i < 1) return;

    f(i-1, n);
    cout << i << " ";
}

Call: f(n, n)

----------------------------------
4️⃣ Print n → 1 (Backtracking)
----------------------------------
void f(int i, int n){
    if(i > n) return;

    f(i+1, n);
    cout << i << " ";
}

Call: f(1, n)

----------------------------------

🧠 GOLDEN RULE:
- Print BEFORE recursion → normal flow
- Print AFTER recursion → reverse (backtracking)

----------------------------------

⚡ MEMORY TRICK:
👉 "Before = Forward"
👉 "After = Reverse"
*/