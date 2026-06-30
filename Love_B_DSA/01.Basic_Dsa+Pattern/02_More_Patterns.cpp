# include <iostream>
using namespace std ;

/* Que 5   123  Print in this type 
           456  
           789          
*/
//  int main (){
//     int n ;
//     cin >> n ; 

//     int i = 1 ; 
//     int count = 1 ;
//     while(i <= n){
//       int j = 1; 
//       while (j <= n ){
//         cout<< count<<" ";
//         count++;
//         j++;
//       }
//       cout<<endl;
//       i++ ;
//     }
//   }
  
/* Que 6   *  Print in this type 
           **                   
           ***         
*/   
   // abrroch as you can see  rom of rows = no. of stars 
  // int main(){
  //   int n ; 
  //   cin>>n ;
    
  //   for(int i = 1 ; i <= n ; i++){
  //     for(int j = 0 ; j <= i ; j++){      //  yaha se apn ne y ko no. of rows -->  i pe assign kiya aur    i =< n   so this is valid for j also 
  //       cout << "*" ;      // ye print no. of rows ke hisab se hoga
  //     }
  //        cout << endl ;
  //   }
  // }


/* Que 7   1  Print in this type 
           22                   
           333         
*/  
 
//  int main (){

//    int m ; 
//    cin >> m ;

//   for( int x = 1 ; x <= m ; x++){  
//     for(int y = 1 ; y <= x ; y++){     // ye loop kya kar raha hai no. of column = no. of rows 
//       cout << x <<" " ;      // ye kya kar raha hai jo row ka no. hai vo print kar rahah hai
//     }
//     cout << endl ;
//   }
//  }

/* Que 8   1  Print in this type 
           23                  
           456         
*/  
 
//  int main (){

//    int m ; 
//    cin >> m ;
//    int count = 1 ;
//    // Method 1 
//   for( int x = 1 ; x <= m ; x++){
//     for(int y = 1 ; y <= x ; y++){
//       cout << count <<" " ;
//       count++;
//     }

  //Method 2 
  //  for( int x = 1 ; x <= m ; x++){
  //   int value = x ;
  //   for(int y = 1 ; y <= x ; y++){
  //     cout<< value ;
  //     value += 1 ;
  //   }
//     cout << endl ;
//   }
//  }


/* Que 8   1  Print in this type 
           21                  
           321     
           4321                    
*/  


 int main (){

   int m ; 
   cin >> m ;
   
  for( int x = 1 ; x <= m ; x++){
    for(int y = 1 ; y <= x ; y++){    
      cout <<  <<" " ;             
      
    }
    cout<< endl ;
  }
 }