/*Q1] Swap an alternate elements    
EX  int arr[5] {1,2, 3,4,5}
                |_|  |_| 

    after swaping 
    output : [2,1 4,3,5]
     */

#include <iostream>
using namespace std;
  
  void printArray(int arr[], int size){
      for(int i = 0; i < size; i++){
          cout << arr[i] << " ";
      }
      cout << endl;
   }
  
  void swapAlternate(int arr[], int size){
      for(int i = 0; i < size; i += 2)
      {
          if(i + 1 < size)
          {
              swap(arr[i], arr[i + 1]);     /* tho ye command ese kaam karti hai   
               temp = arr[1] ; 
                arr[1] = arr[0] ; 
                arr[0] = temp ;*/
          }
      }
   }
  
  int main(){
      int arr[7] = {2,1,4,3,6,5,7};
  
      cout << "Before Swapping : ";
      printArray(arr, 7);
  
      swapAlternate(arr, 7);
  
      cout << "After Swapping : ";
      printArray(arr, 7);
    return 0;
}