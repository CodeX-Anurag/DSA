/*switch(expression)
{
    case constant1:
        // Code
        break;

    case constant2:
        // Code
        break;

    case constant3:
        // Code
        break;

    default:
        // Default code
}


     Meaning of Each Part
1. switch(expression)
   switch(choice)
   
   The expression is the value that the switch checks.
   
   It can be:
   ✅ int
   ✅ char
   
   It cannot be:
   ❌ float
   ❌ double
   ❌ string
   
   Example
   
   int choice = 2;
   switch(choice)
   
   Now C++ will compare
   choice == 1 ?
   choice == 2 ?
   choice == 3 ?


2. case
   
   Each case is one possible value.
   
   Example
   
   case 1:
   means  -->  if(choice == 1)
   
3. break
   
   break stops the switch.
   Without break, execution continues into the next case (called fall-through).
   

4. default
   
   If no case matches,  default executes.
   
   Like -->  else  
   in an if-else statement.*/
 
   

//  With Integer 
 #include <iostream>
 using namespace std;
//     int main()
//     {
//         int choice;
//         cout << "Enter a number (1-3): ";
//         cin >> choice;
    
//         switch(choice)
//         {
//             case 1:
//                 cout << "Monday";
//                 break;
    
//             case 2:
//                 cout << "Tuesday";
//                 break;
    
//             case 3:
//                 cout << "Wednesday";
//                 break;
    
//             default:
//                 cout << "Invalid Choice";
//         } 
//     return 0;
//  }
   
// With Char 
//  #include <iostream>
//  using namespace std;
//   int main()
//   {
//     char grade;
//     cin >> grade;

//     switch(grade)
//     {
//         case 'A':
//             cout << "Excellent";
//             break;

//         case 'B':
//             cout << "Good";
//             break;

//         case 'C':
//             cout << "Average";
//             break;

//         default:
//             cout << "Invalid Grade";
//     }
// }

/*Interview Questions
Q1. Which data types are allowed in switch?
 
 Allowed:  int  char   enum
  
 Not Allowed:  float   double   string
  
#) Why float and string are not allowed?
  
]float x = 2.5;
  switch(x)      // Error
  
  Reason: Floating-point values can have precision issues, so switch only accepts   integral values.
  
  
]string s = "Hello";
  
  switch(s)      // Error
  
  Reason: C++ switch works only with integral types (int, char, enum, etc.), not   strings.


 Q2. What is the purpose of break?
  
  Answer:
  break immediately exits the switch statement. Without it, execution continues into   the following cases (fall-through).*/



//Que ] Mini calculator 

//  int main (){
//     int a , b ; 
//     cout<< "Enter the value of a"<<endl;
//     cin >> a ;

//     cout<< "Enter the value of b "<< endl ;
//     cin >>b ; 

//     char operation ;
//     cout<<"Enter the  operation whic you want to perform ";
//     cin>>operation;

//     switch (operation)
//     {
//     case '+' :  cout<<(a+b)<<endl;
//         break;
    
//     case '-' :  cout<<(a-b)<<endl;
//         break ; 

//     case '*' :  cout<<(a*b)<<endl;
//         break ;
 
//     case '%' :  cout<<(a%b)<<endl;
//         break;   

//     default: cout<< " There is no such a operations ";
//         break;
//     }
//  }


//Que]  No. of Notes required 


int main() {

    int n;
    cout << "Enter Total Amount: ";
    cin >> n;

    switch (1)
    {
        case 1:
            cout << "1000 Notes = " << n / 1000 << endl;
            n = n % 1000;

        case 2:
            cout << "500 Notes = " << n / 500 << endl;
            n = n % 500;

        case 3:
            cout << "100 Notes = " << n / 100 << endl;
            n = n % 100;
           
        case 4:
            cout << "50 Notes = " << n / 50 << endl;
            n = n % 50;

        case 5:
            cout << "20 Notes = " << n / 20 << endl;
            n = n % 20;

        case 6:
            cout << "10 Notes = " << n / 10 << endl;
            n = n % 10;

        case 7:
            cout << "5 Notes = " << n / 5 << endl;
            n = n % 5;

        case 8:
            cout << "2 Notes = " << n / 2 << endl;
            n = n % 2;

        case 9:
            cout << "1 Notes = " << n / 1 << endl;
            n = n % 1;
            break;
    }
    return 0;
}

