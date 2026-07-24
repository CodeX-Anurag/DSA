/*4️⃣ Linear Search ⭐⭐⭐

   One of the most important beginner algorithms.
   
   Problem
   10 20 30 40 50
   
   Find
   30

] Logic
   
   Start from index 0.
   
   Compare every element.
   
   If found
       ↓
   Return true.
   
   Else  
     ↓
   Return false.*/
   
   
    
#include<iostream>
using namespace std;
   
   bool linearSearch(int arr[],int size,int key)
   {
       for(int i=0;i<size;i++){
           if(arr[i]==key)
              return true;
       }
    return false;
   }
   int main()
   {
       int arr[5]={10,20,30,40,50};
       int key=30;
   
       if(linearSearch(arr,5,key))
           cout<<"Found";
       else
           cout<<"Not Found";
   }
 /*  
   Output : Found
   Time Complexity : O(n)
   
   Worst case  :->  Need to check every element.

   


5️⃣ Reverse an Array
   
   Given
   10 20 30 40 50
   
   Need
   50 40 30 20 10

] Logic
   
   Use two pointers.
   
   Start
    ↓
   End
   
   Swap
    ↓
   Move
   
   Start++
   End--
   
   Continue until  ->  Start>=End


   Dry Run
 ] 10 20 30 40 50
   S          E
   
   Swap ->
   50 20 30 40 10
   Move
       S    E
   
   Swap ->
   50 40 30 20 10
   Move
         S
         E
    Stop.*/
   

#include<iostream>
using namespace std;
   void reverse(int arr[],int size)
   {
       int start=0;
       int end=size-1;
   
       while(start<end)
       {
           swap(arr[start],arr[end]);
           start++;
           end--;
       }
   }
   int main()
   {
       int arr[5]={10,20,30,40,50};
   
       reverse(arr,5);
   
       for(int i=0;i<5;i++)
           cout<<arr[i]<<" ";
   }

/*📝 Notebook Notes
] Arrays in Functions :

  Arrays are passed to functions without creating a separate copy of all elements.
  Changes made inside the function affect the original array.


] Linear Search :

  Compare the key with each element.
  If found → return true.
  Else → return false.
  Time Complexity: O(n).


] Reverse Array

  Use two pointers: start = 0, end = n - 1.
  Swap arr[start] and arr[end].
  Increment start, decrement end.
  Continue while start < end.
  Time Complexity: O(n).
*/