// HW_DSA
# include <iostream>
using namespace std;

//Q1. Sum of all even numbers 
 int main () {
 int n ; 
 cin >> n ;
 int sum = 0 ;
 int i = 0 ;

 while (i <= n) {
     if (i % 2 == 0) {
         sum = sum + i ;
     }
     i++ ;
 }
 // Method 2 
 while (i <= n) {
     sum = sum + i ;
     i = i + 2 ;
 }
 cout << "sum of all even numbers from 1 to n is : "  << sum << endl ;
 
 return 0 ;
}



/*       Patters    
Que 1     ***    Print in this type 
          ***  
          ***          
*/
# include <iostream> 
using namespace std ;
 
 int main (){
 int n ; 
 cin >> n ;

//By while loop       
  int i = 0 ;      // agr i = 0 lete tho   i < n rakh na padhta nahi tho ek bar extra print hota 
  while(i < n ){      
    int j = 1 ;
    while ( j <= n){
        cout << "*" ;
        j++;
    }
    cout<<endl;
    i++;
   }

 //By for loop 
 for (int i = 0 ; i < n ; i++){  
    for(int j = 0 ; j < n ; j++){
        cout<<"*";
    }
    cout<<endl;
   }
 } 

/* Que 2   111    Print in this type 
           222  
           333          
*/

  int main (){
    int n ;
    cin >> n ; 

    int i = 1 ; 
    while(i <= n){
      int j = 0 ; 
      int num  = i ;
      while (j < n ){
        cout<< num ;
        j++;
      }
      cout<<endl;
      i++ ;
    }


    // By for loop 
    for (int i = 1 ; i <= n ; i++){
      for (int j = 1 ; j <= n ; j++){
        cout << i ;                    // kyuki es mein row wise print ho raha hai es liye pattern samjho 
      }
      cout << endl ;
    }
  }

/* Que 3   123..  Print in this type 
           123..  
           123..          
*/

 int main (){
    int n ;
    cin >> n ;

    
    for (int i = 1 ; i <= n ; i++){
      for (int j = 1 ; j <= n ; j++){
        cout << j ;             // Kyuki es mein column wise print ho raha hai 
      }
      cout << endl ;
    }
  }

/* Que 4   321...  Print in this type 
           321...  
           321...          
*/
 
 int main (){
    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
      for (int j = 1 ; j <= n ; j++){
        cout << n-j+1 ;                // let n=3 , j = 1  sp  3-1+1 = 3  ,n = 3 ,j = 2  so 3-2+1 = 2   
       }
      cout << endl ;
    }
  }



