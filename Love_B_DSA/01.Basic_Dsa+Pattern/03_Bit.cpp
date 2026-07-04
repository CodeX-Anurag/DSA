/*   N O T E S  

#] What are Bitwise Operators?
  A bitwise operator performs operations on the binary representation of numbers.
  
  For example,
  5  is stored as -> 00000101
  
  and
  
  3  is stored as -> 00000011


  Let's first learn decimal to binary.
  
  Decimal	Binary
    0	     0000
    1	     0001
    2	     0010
    3	     0011
    4	     0100
    5	     0101
    6	     0110
    7	     0111
    8	     1000
  
1. Bitwise AND (&)
  
  1 & 1 = 1
  
  1 & 0 = 0
  
  0 & 1 = 0
  
  0 & 0 = 0
  
  # ek bhi zero tho output -> zero 
  
  Example
  
  5 & 3
  
  Binary
  
  5 = 0101    &
  3 = 0011
  -------------
      0001   = 1 decimal
  

  #include <iostream>
  using namespace std;
  
  int main()
  {
      cout << (5 & 3);   // 1
  }
  
  Another Example
  
  6 & 3
  6 = 0110
  3 = 0011
  -----------
      0010
  0010 = 2
  
  Output : 2

2]. Bitwise OR (|)
  
  1 | 1 = 1
  
  1 | 0 = 1
  
  0 | 1 = 1
  
  0 | 0 = 0
  
  #  ek bhi 1 tho output -> 1
  
  Example
  
  5 | 3
  5 = 0101
  3 = 0011
  ------------
      0111
  0111 = 7
  

  
3]. Bitwise XOR (^)
  
  1 ^ 1 = 0
  
  0 ^ 0 = 0
  
  1 ^ 0 = 1
  
  0 ^ 1 = 1
  
  # if any one bit is different then output will be 1 otherwise 0
  Same → 0
  Different → 1
  
  Example
  
  5 ^ 3
  5 = 0101
  3 = 0011
  ------------
      0110
  0110 = 6
  

4]. Bitwise NOT (~)

  This flips every bit.
  1 → 0
  0 → 1
  
  Example
  5
  
  Binary (8-bit view) -> 00000101
  After NOT ~ ->         11111010
  
  But in C++, integers are stored using two's complement, so the result is interpreted as a negative number.
  cout << ~5;
  
  Output : -6

  #] Why ~5 is -6?
  
  Let's see it step by step:
  
  5  = 00000101
  
  ~5 = 11111010
  
  The leftmost bit is 1, so it's a negative number. To find its value:
  
  Invert the bits:
  11111010
  ↓
  00000101    1's complement
  Add 1:
  00000101    2's complement
  +       1
  ---------
  00000110
  
  This is 6, so the original number is -6.
  
  A handy rule is:
  
  ~x = -(x + 1)
  
  Examples:
  
  ~5 = -6
  ~10 = -11
  ~0 = -1

5]. Left Shift (<<) 
    
    Moves every bit to the left.
    Every left shift by 1 multiplies the number by 2.
    
 *) Example
    5 << 1
    
    Binary: 5 = 00000101  
    Shift :     00001010  ->  10
    
    Code
    cout << (5 << 1);    // Output: 10

  
    
   *) Example
    
    5 << 2
    00000101 
       ↓
    00010100 ->  20

    Formula
   #) x << n =  x × 2ⁿ
    
   *) Examples
    
    5 << 1 = 10       5 × 2^1 = 10
    
    5 << 2 = 20       5 × 2^2 = 20
    
    5 << 3 = 40       5 × 2^3 = 40


6]. Right Shift (>>)
    
    Moves bits to the right.
    Usually (for positive integers), each right shift by 1 divides the number by 2.
    
   *) Example
    
    20 >> 1
    
    Binary : 20 = 00010100 
    Shift :       00001010  -> 10
    
   *) Example
    
    20 >> 2
    00010100
       ↓
    00000101   -> 5
    
   Formula (positive integers) 
   # ) x >> n  =  x / 2ⁿ
    
    Examples
    
    20 >> 1 = 10    20/2^1 = 10
    
    20 >> 2 = 5     20/2^2 = 5
    
    32 >> 3 = 4     32/2^3 = 4
    
Note: For negative numbers, right shift behavior can depend on the compiler and implementation, so beginners should       practice with positive numbers first.
        */
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    cout << "AND : " << (a & b) << endl;
    cout << "OR  : " << (a | b) << endl;
    cout << "XOR : " << (a ^ b) << endl;
    cout << "NOT : " << (~a) << endl;
    cout << "Left Shift : " << (a << 1) << endl;
    cout << "Right Shift: " << (a >> 1) << endl;
}


/*What is Fibonacci Series?
   
   The Fibonacci series starts like this:
   0, 1, 1, 2, 3, 5, 8, 13, 21, ...
   
   
   Every new number is the sum of the previous two numbers.
   
   0 + 1 = 1
   
   1 + 1 = 2
   
   1 + 2 = 3
   
   2 + 3 = 5
   
   3 + 5 = 8
   
   5 + 8 = 13
   
   8 + 13 = 21
   
   0    1    1    2    3    5    8    13    21
         \  /      \  /      \   /       \   /
          1         3         8          21
   
   Let's see a few examples:
   
   Finding 5
   Previous two numbers
   
   2 + 3 = 5
   Finding 8
   3 + 5 = 8
   Finding 13
   5 + 8 = 13
   Finding 21
   8 + 13 = 21
   
   That's exactly what those arrows are showing.
   
   What does this formula mean?:
   n = (n-1) + (n-2)
   
   This is not mathematically correct as written.
   The correct recurrence relation is:
   
   #] F(n) = F(n-1) + F(n-2)
   
   where:
   
   F(n) = nth Fibonacci number
   F(n-1) = previous Fibonacci number
   F(n-2) = second previous Fibonacci number

  *) Example
   Suppose we want the 7th Fibonacci number.
   
   F(7)
   = F(6) + F(5)
   = 8 + 5
   = 13
   Let's Build the Series
   
   We know:
   
   F(0) = 0
   F(1) = 1
   
   Now,
   
   F(2) = F(1) + F(0) = 1 + 0 = 1
   F(3) = F(2) + F(1) = 1 + 1 = 2
   F(4) = F(3) + F(2) = 2 + 1 = 3
   F(5) = F(4) + F(3) = 3 + 2 = 5
   F(6) = F(5) + F(4) = 5 + 3 = 8
   F(7) = F(6) + F(5) = 8 + 5 = 13
   F(8) = F(7) + F(6) = 13 + 8 = 21
  */
#include <iostream>
using namespace std;
   
   int main() {
       int n;
       cin >> n;
   
       int a = 0, b = 1;
   
       for (int i = 0; i < n; i++) {
           cout << a << " ";
   
           int c = a + b;
           a = b;
           b = c;
       }
   }

/*Input: 8
   Output :0 1 1 2 3 5 8 13
   Important Note (Very Common Interview Question)

   Many beginners think:
   F(n) = n - 1 + n - 2
   ❌ This is wrong because n is just the index, not the value.
   
   For example:
   F(5)
   Wrong:
   5-1 + 5-2 = 4 + 3 = 7 ❌
   
   Correct:
   F(4) + F(3)
   3 + 2 = 5 ✅
*/

// Que ]  check whether a number is a prime number or not 

 int main (){
    int n ; 
    cin >> n ; 

    for( int i = 2 ; i < n ; i++){
        if( n % i == 0){
            cout << "Not Prime" << endl;
            break ; 
        }
    }
 }

// Method 2 : Using Flag Variable

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    bool isPrime = 1;   

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 0;    // false 
            break;          // ye loop ko break kar dega agar ek bhi number divide ho jata hai toh
        }
    }

    if(isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "Is a Prime Number" << endl;
    }
}


/* What is continue?

   continue means:
   " ye iteration ko skip kar do aur next iteration pe chalo "
   
   It does not stop the loop.
   

 *)  Example 1*/
   int main()
   {
       for(int i = 1; i <= 5; i++)
       {
           if(i == 3)
           {
               continue;
           }
   
           cout << i << " ";
       }
   }
  /* Dry Run
   First Iteration    i = 1

   Condition
   if(i == 3)
   1 == 3  -> False    So  cout << 1;
   Output : 1

 2]Second Iteration
   i = 2
   Again 2 == 3 False
   Output : 1 2

  3]Third Iteration
   i = 3
   Now 3 == 3  -> True

   Program executes 
   continue;
   

 #] What happens?
   
  *) ye program continue statement ko execute karta hai, jo ki current iteration ko skip kar deta hai aur loop ke next iteration pe chala jata hai.
   
  *) So this line is skipped: cout << i;
   
  *)Then the loop immediately goes to the next iteration (i = 4).
   
   Output is still : 1 2

  4]Fourth Iteration
   i = 4 Prints 4
   
   Output: 1 2 4

  5] Fifth Iteration
   i = 5  Prints  5
   
   Final Output : 1 2 4 5
   */

// Example 2 :Print only odd numbers.

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        cout <<"Odd numbers are : "<<  i << " ";
    }
}