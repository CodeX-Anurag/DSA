#include <iostream>
using namespace std;
                  
           // POWER(a^b)
// int power(int num1, int num2)
// {
//     int ans = 1;

//     for (int i = 1; i <= num2; i++)
//     {
//         ans = ans * num1;
//     }
//   return ans;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter Base and Power: ";
//     cin >> a >> b;
//     int answer = power(a, b);
//     cout << "Answer is " << answer << endl;

//     int c, d;
//     cout << "Enter Base and Power Again: ";
//     cin >> c >> d;
//     answer = power(c, d);
//     cout << "Answer is " << answer << endl;

//   return 0;
// }



//              Even or ODD 
 
 //              Method 1 
//    string num(int n)
//    {
//        if (n % 2 == 0)
//            return "Even";
//        else
//            return "Odd";
//    }
   
//    int main()
//    {
//        int N;
   
//        cout << "Enter your number: ";
//        cin >> N;
   
//        cout << "Number is: " << num(N);
   
//        return 0;
//    }

// Method 2 
//  #include <iostream>
//  using namespace std;

//    bool isEven(int n)
//    {
//        if (n % 2 == 0)      /*  if(n & 1)  kyuki and mein      1 - 1 hai tho hi zero aayega          */
                                            
//            return true;// 1
//        else
//            return false;//0
//    }
   
//    int main(){
   
//        int N;
   
//        cout << "Enter your number: ";
//        cin >> N;
   
//        if (isEven(N))
//            cout << "Number is Even";
//        else
//            cout << "Number is Odd";
   
//        return 0;
//    }




/*         nCr      nCr = n! / (r! * (n-r)!)   */

    #include <iostream>
   using namespace std;

   // Function to calculate factorial
//    int factorial(int n)
//    {
//        int fact = 1;
   
//        for (int i = 1; i <= n; i++)
//        {
//            fact = fact * i;
//        }
//        return fact;
//    }
   
   // Function to calculate nCr
//    int nCr(int n, int r)
//    {
//        int numerator = factorial(n);
   
//        int denominator = factorial(r) * factorial(n - r);
   
//        return numerator / denominator;
//    }
   
//    int main()
//    {
//        int n, r;
   
//        cout << "Enter n and r: ";
//        cin >> n >> r;
   
//        cout << "nCr = " << nCr(n, r);
   
//        return 0;
//    }
    



/*                    Counting program  
   ab sif apn ko count karna hai tho sif i print karate retun ki kuch jarurat nahi hai tho  void     */       
//   void counting(int n)
//    {
//        for (int i = 1; i <= n; i++)         // For REVERSE Counting    for (int i = n; i >= 1; i--)
//        {
//            cout << i << " ";
//        }
//        cout<<endl ;
//    }
   
//    int main(){
//        int n;
   
//        cout << "Enter a Number: ";
//        cin >> n;
   
//        counting(n);
   
//        return 0;
//    }



//        Prime Number Function
   
  bool isprime(int n ){

     if( n <= 1 )
     return false ; 

     for ( int i = 2 ; i < n ; i++ ){
        if ( n % i == 0 ){
            return  false ;
        }
     }
    return true ;
  }  
  int main (){
     
  int N ; 
  cout << "Enter the number : ";
  cin >> N; 
   
     if( isprime(N) ){
             cout << N << " is a Prime Number";
    }
    else
    {
        cout << N << " is Not a Prime Number";
    }
    return 0;
}
    