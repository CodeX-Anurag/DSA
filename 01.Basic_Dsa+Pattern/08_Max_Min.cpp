// 1. Maximum Element in an Array

 #include<iostream>
 using namespace std ; 

 int get_max( int arr[] ,int size ){
   int maxi = arr[0] ;
   for(int i = 0 ; i < size ; i ++){
    if ( arr[i] > maxi){
        maxi = arr[i];
    }
    return maxi ;
   }
 }
 int main (){
   int arr [5] = { 10 , 30 , 50 , 20 , 5}  ;
   cout<< "Maximum" << get_max( arr , 5);
   return 0 ; 
 }

/* # Better Way 

 #include <limits.h>

 int maxi = INT_MIN;                    -2^31 TO  2^31
 int mini = INT_MAX ; 

         Why?
  Suppose array contains
      -10 -40 -3

  If we initialize
  int maxi = 0;

  Answer becomes :0
 */

#include <iostream>
#include <limits.h>
   using namespace std;
   
   int getMax(int arr[], int size)
   {
       int maxi = INT_MIN;
   
       for(int i = 0; i < size; i++)
       {
           if(arr[i] > maxi)
               maxi = arr[i];
       }
     return maxi;
    }



// 2. Minimum Element

  #include <iostream>
  #include <limits.h>
  using namespace std;

   int getMin(int arr[], int size)
   {
       int mini = INT_MAX;
   
       for(int i = 0; i < size; i++)
       {
           if(arr[i] < mini)
               mini = arr[i];
       }
     return mini;
   }
    int main()
   {
       int arr[5] = {10,40,25,67,18};  
       cout << "Minimum = " << getMin(arr,5);
    return 0;
}