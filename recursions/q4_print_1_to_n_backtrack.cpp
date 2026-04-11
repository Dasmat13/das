//print 1 to n (by using backtrack)
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i < 1){
        return;
    }
    else{
        f(i-1, n);   // go deeper first
        cout << i << endl; // print after return
    }
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}

/*
🔁 RECURSION & BACKTRACKING NOTES

1. Base Case:
   - Condition to stop recursion
   - Prevents infinite calls

2. Recursive Call:
   - Function calls itself with smaller input

3. Backtracking Concept:
   - First go deep (recursive call)
   - Then do work while returning

----------------------------------

📌 Printing Patterns:

👉 Print 1 to n:
   f(i-1);
   print(i);
   // Go till 0, print while coming back

👉 Print n to 1:
   print(i);
   f(i-1);
   // Print first, then go deeper

👉 Using increasing i (1 → n):

   // Normal order
   print(i);
   f(i+1);

   // Reverse order (backtracking)
   f(i+1);
   print(i);

----------------------------------

🧠 Golden Rule:
- Print BEFORE recursion → Normal order
- Print AFTER recursion → Reverse order

----------------------------------

⚡ Always remember:
- Recursion = function calling itself
- Backtracking = "go deep, then print"
*/ 