/*📒 Arrays - Short Notes
   Definition
      Array is a collection of elements of the same data type stored in contiguous memory locations.
   
Why Arrays?
   Store multiple values using one variable.
   Easy to access and manage data.
   
Example:
   
   int arr[5];
   Syntax
   dataType arrayName[size];
   
Example:

   int arr[10];
 Initialization :
   int arr[5] = {10,20,30,40,50};
   or
   int arr[] = {1,2,3,4};*/

//   Input Array
   #include <iostream>
   using namespace std;
   int main (){
    int arr[5];
    int n = 5 ;  
   for(int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
//   Output Array
   for(int i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
}


//1. Initializing an Array
   #include <iostream>
   using namespace std;
   
   int main()
   {
       // Initialising an array
       int second[3] = {5, 7, 11};
   
       // Accessing an element
       cout << "Value at 2 index: " << second[2] << endl;
   
       return 0;
   }
   
   
//2. Partial Initialization
   #include <iostream>
   using namespace std;
   
   int main()
   {
       int third[15] = {2, 7};
   
       int n = 15;
   
       cout << "Printing the array" << endl;
   
       for (int i = 0; i < n; i++)
       {
           cout << third[i] << " ";
       } 
       return 0;
   }
   
   
   
//3. Initialize All Elements with 0
   #include <iostream>
   using namespace std;
   
   int main()
   {
       int fourth[10] = {0};
   
       int n = 10;
   
       cout << "Printing the array" << endl;
   
       for (int i = 0; i < n; i++)
       {
           cout << fourth[i] << " ";
       }
       return 0;
   }



/*               A R R A Y       in       F U N C T I O N
  When we pass an array to a function, is a copy passed or the original array?

  --> The answer is the original array is accessible through its first element's address, so changes inside the function affect the original array.

Example 1: Print an Array*/
   #include <iostream>
   using namespace std;
   
   void printArray(int arr[], int size)
   {
       for (int i = 0; i < size; i++)
       {
           cout << arr[i] << " ";
       }
       cout << endl;
   }
   
   int main()
   {
       int arr[5] = {10, 20, 30, 40, 50};
   
       printArray(arr, 5);    // Output   :10 20 30 40 50
    return 0;
   }

                           
// Example 2: Modify an Array


   void updateArray(int arr[], int size)
   {
       arr[0] = 100;
   }
   int main()
   {
       int arr[5] = {10, 20, 30, 40, 50};
   
       updateArray(arr, 5);
   
       for (int i = 0; i < 5; i++)
       {
           cout << arr[i] << " ";    //  Output :100 20 30 40 50
       } 
       return 0;
   }
  



/*1. Different Types of Arrays
   There are mainly 5 types that you'll use in DSA.

1) Integer Array
    
    Stores integers only.
    
    int arr[5] = {10,20,30,40,50};
    
    Memory
    
    Index : 0   1   2   3   4
    Value :10  20  30  40  50
    
    Each element occupies 4 Bytes.
    
    
    
2) Character Array
    
    Stores characters.
    
    char name[5] = {'A','N','U','R','G'};
    
    Memory
    
    Index : 0   1   2   3   4
    
    Value : A   N   U   R   G
    
    Each character occupies 1 Byte. -->  Later this becomes Strings 
   
   
3) Boolean Array
    
    Stores only   ->    true     false
    
 Example
    
    bool present[5] = {true,false,true,false,true};
    
    Memory
    
    true
    false
    true
    false
    true
    
    Used in
    
   
 
4) Float Array
    
    Stores decimal numbers.
    
    float marks[4] = {89.5,92.4,77.8,81.9};
    
    Memory
    
    89.5
    
    92.4
    
    77.8
    
    81.9
    
    Each float occupies 4 Bytes.
    


5) Double Array
    
    Stores large decimal values.
    
    double salary[3] = {50000.25,70000.45,90000.88};
    
    Double occupies
    
    8 Bytes*/