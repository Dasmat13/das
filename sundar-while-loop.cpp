/*
=====================================================
📘 WHILE LOOP – LOGIC BUILDING NOTES (REVISION FILE)
=====================================================

🟢 CORE WHILE LOOP STRUCTURE
-----------------------------------------------------
initialization;
while(condition) {
    // logic
    update;
}

🔑 REMEMBER:
- Initialization → before loop
- Condition → checked every iteration
- Update → must change variable
- Missing update = ❌ infinite loop
*/

/* =====================================================
   🟢 1. PRINTING NUMBERS (FORWARD & REVERSE)
   ===================================================== */

// Print numbers from 1 to 10
/*
int i = 1;
while (i <= 10) {
    cout << i << endl;
    i++;   // 🔑 increment
}
*/

// Print numbers from 5 to 15
/*
int i = 5;
while (i <= 15) {
    cout << i << endl;
    i++;
}
*/

// Print numbers from 10 to 1 (REVERSE)
/*
int i = 10;
while (i >= 1) {
    cout << i << endl;
    i--;   // 🔑 decrement for reverse
}
*/

/* =====================================================
   🟢 2. EVEN & ODD NUMBERS (SMART WAY)
   ===================================================== */

// EVEN numbers from 1 to 100
/*
int i = 2;
while (i <= 100) {
    cout << i << endl;
    i += 2;   // 🔑 jump by 2
}
*/

// ODD numbers from 1 to 100
/*
int i = 1;
while (i <= 100) {
    cout << i << endl;
    i += 2;
}
*/

/*
🔑 REMEMBER:
- Even → start from 2
- Odd → start from 1
- No need for %2 check
*/

/* =====================================================
   🟢 3. MULTIPLICATION TABLE
   ===================================================== */

// Table of n from n×1 to n×10
/*
int n;
cin >> n;

int i = 1;
while (i <= 10) {
    cout << n << " x " << i << " = " << n * i << endl;
    i++;
}
*/

/* =====================================================
   🟢 4. SUM BASED PROBLEMS
   ===================================================== */

// Sum of first n natural numbers
/*
int n;
cin >> n;

int i = 1, sum = 0;
while (i <= n) {
    sum += i;
    i++;
}
cout << sum << endl;
*/

// Sum of EVEN numbers up to n
/*
int n;
cin >> n;

int i = 2, sum = 0;
while (i <= n) {
    sum += i;
    i += 2;
}
cout << sum << endl;
*/

// Sum of ODD numbers up to n
/*
int n;
cin >> n;

int i = 1, sum = 0;
while (i <= n) {
    sum += i;
    i += 2;
}
cout << sum << endl;
*/

/*
🔑 GOLDEN RULE:
- Sum → initialize with 0
- Product → initialize with 1
*/

/* =====================================================
   🟢 5. FACTORIAL
   ===================================================== */

// Factorial of a number
/*
int n;
cin >> n;

int i = 1;
int fact = 1;
while (i <= n) {
    fact *= i;
    i++;
}
cout << fact << endl;
*/

/* =====================================================
   🟢 6. DIGIT BASED CORE LOGIC (VERY IMPORTANT)
   ===================================================== */

/*
🔑 UNIVERSAL DIGIT FORMULA:
--------------------------------
digit = n % 10;   // extract last digit
n = n / 10;       // remove last digit
--------------------------------
Used in:
- reverse
- palindrome
- sum of digits
- product of digits
- Armstrong
*/

/* =====================================================
   🟢 7. PRODUCT OF DIGITS
   ===================================================== */
/*
int n;
cin >> n;

int product = 1;
while (n > 0) {
    int digit = n % 10;
    product *= digit;
    n /= 10;
}
cout << product << endl;
*/

/* =====================================================
   🟢 8. COUNT DIGITS
   ===================================================== */
/*
int n;
cin >> n;

int count = 0;
while (n > 0) {
    count++;
    n /= 10;
}
cout << count << endl;
*/

/* =====================================================
   🟢 9. REVERSE NUMBER
   ===================================================== */
/*
int n;
cin >> n;

int rev = 0;
while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;   // ⭐ MOST IMPORTANT FORMULA
    n /= 10;
}
cout << rev << endl;
*/

/* =====================================================
   🟢 10. PALINDROME NUMBER
   ===================================================== */
/*
int n;
cin >> n;

int original = n;
int rev = 0;

while (n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
}

if (original == rev)
    cout << "Palindrome";
else
    cout << "Not Palindrome";
*/

/*
🔑 REMEMBER:
- Always store original value
- Never compare with modified n
*/

/* =====================================================
   🟢 11. SUM OF DIGITS
   ===================================================== */
/*
int n;
cin >> n;

int sum = 0;
while (n > 0) {
    int digit = n % 10;
    sum += digit;
    n /= 10;
}
cout << sum << endl;
*/

/* =====================================================
   🟢 12. ARMSTRONG NUMBER
   ===================================================== */
/*
int n;
cin >> n;

int original = n;
int temp = n;
int count = 0;

// Count digits
while (n > 0) {
    count++;
    n /= 10;
}

// Armstrong calculation
int arm = 0;
while (temp > 0) {
    int digit = temp % 10;
    arm += pow(digit, count);   // ✅ pow(), NOT ^
    temp /= 10;
}

if (arm == original)
    cout << "Armstrong";
else
    cout << "Not Armstrong";
*/

/*
⚠️ VERY IMPORTANT:
^  → XOR operator (WRONG for power)
pow(a,b) → correct power
*/

/* =====================================================
   🟢 13. PERFECT NUMBER
   ===================================================== */
/*
int n;
cin >> n;

int original = n;
int sum = 0;
int i = 1;

while (i <= n / 2) {
    if (n % i == 0)
        sum += i;
    i++;
}

if (sum == original)
    cout << "Perfect Number";
else
    cout << "Not Perfect";
*/

/*
🔑 REMEMBER:
- Proper divisors only
- Loop till n/2
*/

/* =====================================================
   🔥 MASTER MEMORY SUMMARY
   =====================================================

Reverse      → rev = rev*10 + digit
Digit logic  → n%10 , n/10
Sum          → start from 0
Product      → start from 1
Palindrome   → save original
Armstrong   → use pow()
Perfect     → loop till n/2

=====================================================
END OF REVISION FILE
=====================================================
*/
