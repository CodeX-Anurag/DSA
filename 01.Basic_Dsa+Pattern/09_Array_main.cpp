//1️⃣ Scope in Array

   #include <iostream>
   using namespace std;
   
   void printArray(int arr[], int size)
   {
       cout << "Inside Function" << endl;
   
       for(int i=0;i<size;i++)
       {
           cout << arr[i] << " ";
       }
   
       cout << endl;
   }
   
   int main()
   {
       int arr[5]={1,2,3,4,5};
   
       printArray(arr,5);
   
       cout<<"Inside Main"<<endl;
   
       for(int i=0;i<5;i++)
       {
           cout<<arr[i]<<" ";
       }
   }
   
   /*Output
   
   Inside Function
   1 2 3 4 5
   
   Inside Main
   1 2 3 4 5

   What happened? ->  When we write -> printArray(arr,5);
   

   The compiler passes the array to the function.
   
   The function receives
   
   1 2 3 4 5
   prints it, -> comes back,
   
   and main() still has the same array.
   
   
   Call
   printArray(arr)

   printArray()
   
   ↓
   
   Uses the SAME array
   
   Notice
   
   No new array is created.
   
   Why?  
    Because arrays in C++ are not copied when passed like this.
   
   Actually,  arr -> becomes
   
   pointer to first element
   
   We'll study pointers later.
   
   For now remember only
   
   Function receives access to the original array.*/



/*2️⃣ Why arr[0] Changed in main()?
  
  "Why did arr[0] change?"*/
  
  
  void update(int arr[],int n)
  {
      arr[0]=120;
  
      cout<<"Inside Function"<<endl;
  
      for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
  }
  
  int main()
  {
      int arr[3]={1,2,3};
  
      update(arr,3);
  
      cout<<endl;
  
      cout<<"Inside Main"<<endl;
  
      for(int i=0;i<3;i++)
          cout<<arr[i]<<" ";
  }
  
 /* Output
  Inside Function

  120 2 3
  
  Inside Main
  
  120 2 3


  Question
  Why didn't it become
  
  1 2 3
  
  again?
  
  Answer ->Because  update()  didn't receive a copy.   -> It received the original array.
  
  Memory
  
  Before   main()  arr
  +---+---+---+
  |1  |2  |3  |
  +---+---+---+
  
  Inside Function
  
  arr[0]=120
  Memory becomes
  +-----+---+---+
  |120  |2  |3  |
  +-----+---+---+
  
  Function ends.
  

  Memory   main()
  
  +-----+---+---+
  |120  |2  |3  |
  +-----+---+---+
  
  Nothing is copied.
  
  That's why it changes.*/