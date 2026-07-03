# include <iostream>
using namespace std ;

/* Que 5   123  Print in this type 
           456  
           789          
*/
 int main (){
    int n ;
    cin >> n ; 

    int i = 1 ; 
    int count = 1 ;
    while(i <= n){
      int j = 1; 
      while (j <= n ){
        cout<< count<<" ";
        count++;
        j++;
      }
      cout<<endl;
      i++ ;
    }
  }
  
/* Que 6   *  Print in this type 
           **                   
           ***         
*/   
  //aprroach as you can see  no. of rows = no. of stars 
  int main(){
    int n ; 
    cin>>n ;
    
    for(int i = 1 ; i <= n ; i++){
      for(int j = 0 ; j <= i ; j++){      //  yaha se apn ne y ko no. of rows -->  i pe assign kiya aur    i =< n   so this is valid for j also 
        cout << "*" ;      // ye print no. of rows ke hisab se hoga
      }
         cout << endl ;
    }
  }


/* Que 7   1  Print in this type 
           22                   
           333         
*/  
 
 int main (){

   int m ; 
   cin >> m ;

  for( int x = 1 ; x <= m ; x++){  
    for(int y = 1 ; y <= x ; y++){     // ye loop kya kar raha hai no. of column = no. of rows 
      cout << x <<" " ;      // ye kya kar raha hai jo row ka no. hai vo print kar rahah hai
    }
    cout << endl ;
  }
 }

/* Que 8   1  Print in this type 
           23                  
           456         
*/  
 
 int main (){

   int m ; 
   cin >> m ;
   int count = 1 ;
   // Method 1 
  for( int x = 1 ; x <= m ; x++){
    for(int y = 1 ; y <= x ; y++){
      cout << count <<" " ;
      count++;
    }

  //Method 2 
   for( int x = 1 ; x <= m ; x++){
    int value = x ;
    for(int y = 1 ; y <= x ; y++){
      cout<< value ;
      value += 1 ;
    }
    cout << endl ;
   }
  }
 }

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
      cout << x - y + 1 <<" " ;              // Ab ye formula soch ne se aya try karo  
      
    }
    cout<< endl ;
  }
 }


/* Que 9   1  Print in this type 
           12                  
           123     
           1234                    
*/
 int main (){

   int m ; 
   cin >> m ;
   
  for( int x = 1 ; x <= m ; x++){
    for(int y = 1 ; y <= x ; y++){    
      cout <<  y   <<" " ;              
      
    }
    cout<< endl ;
  }
 }


/* Que 9   AAA..  Print in this type 
           BBB..                
           CCC..     
           .....                    
*/
 int main (){

   int n ; 
   cin >> n ;
   
  for( int row = 1 ; row <= n ; row++){
     char ch = 'A' + row - 1;
    for( int col = 1 ; col <= n ; col++){
     cout << ch ;
    }
    cout << endl ;
   }
 }


/* Que 10  ABC..  Print in this type 
           ABC..                
           ABC..     
           .....                    

  Note #] Dekho ese que mein relation banao sabse pehle yahi logic buliding hai jese esmein row aur column mein apn ko kesa print chaiye , tho es mein row depend nahi kar rhah hai col depend kar raha hai 
  es hi logic build hote hai .
 */
   int main (){

   int n ; 
   cin >> n ;
   
  for( int row = 1 ; row <= n ; row++){
    for( int col = 1 ; col <= n ; col++){  
      char ch = 'A'+ col -1 ;
     cout << ch ;
    }
    cout << endl ;
   }
 }


/* Que 10  ABC..  Print in this type 
           DEF..                
           GHI..     
           ....                    
*/
   int main (){

   int n ; 
   cin >> n ;
   
   char ch = 'A' ;
  for( int row = 1 ; row <= n ; row++){ 
    for( int col = 1 ; col <= n ; col++){  
     cout << ch ;
     ch += 1 ;
    }
    cout << endl ;
   }
 }


/* Que 11  123..  Print in this type 
           234..                
           345..     
           ....                    
*/
   int main (){
    int n ; 
    cin >> n ;
    
    int i = 1 ;
    while( i <= n ){
      int j = 1 ;
      while( j <= n){
        cout << i + j - 1 ;
        j++ ;
      }
      cout<<endl;
      i++;
    }
  }


/* Que 12  ABC..  Print in this type 
           BCD..                
           CDE..     
           ....                    

    you have to observe like above problem i + j -1  
      assume i = 2   j = 2      so   4-1 -> 3   tho esa hi apn ko "A" lana hai tho apn "A"   kese layenge 
           1 ko A ae map  , 2 ko B se map ................
          i + j - 1 = 1 -->A    , ab "A" kese laye dono side A  add karo 
       => i + j - 1 + 'A' = 1 + 'A'   ab 1 hatana hai RHS se tho both side - 1 
       => i + j - 2 + 'A' = 'A'
 */
  int main (){
    int n ; 
    cin >> n ;
    
    int i = 1 ;
    while( i <= n ){
      int j = 1 ;
      while( j <= n){
        char ch = i + j - 2 + 'A';
        cout << ch ;
        j++ ;
      }
      cout<<endl;
      i++;
    }
  }


/* Que 13  A..  Print in this type 
           BB..                
           CCC..     
           ....    tho ye directly no. of rows pe depend karta hai 
 */
 int main (){
  int n ;
  cin >> n ;

  for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){    // kyuki j jo hai no. of rows pe depend kar raha hai 
     char ch = 'A'+ i -1 ;     /*es ko bhi vesa hi socho jese apn no. ko print karate the tho i likh te  the    i = 1 2 3 .....
     so for 'A' =>  i + 'A' = 1 + 'A'       phir 1 remove karne ke liye -1 add both side 
                =>  i + 'A' - 1 = 'A'  
    */
     cout << ch ;
    }
   cout<<endl;
  }
 }


/* Que 14  A..  Print in this type 
           BC..                
           DEF.     
           ....     count jes hai. 
  */
 int main (){
  int n ;
  cin>>n;

  char value = 'A' ;
  for(int i = 1 ; i <= n ; i++){
    for (int j = 1 ; j <= i; j++){ 
      cout<<value ;
      value += 1 ;
    }
    cout<<endl;
  }
 }


/* Que 15  D..  Print in this type 
           CD..                
           BCD..
           ABCD..     
           ....        es mein apn starting ke digit nikalte phir incriment karte 
  */
 int main (){
  int n ;
  cin>>n;

  for(int i = 1 ; i <= n ; i++){
    char des = n - i + 'A' ;
    for (int j = 1 ; j <= i; j++){ 
     cout<<des ; 
     des += 1 ;  // des++;
    }
    cout<<endl;
  }
 }


/* Que 16   Print in this type 
        ___*     -> 3 space, 1 star               
        __**     -> 2 space, 2 stars 
        _***     -> 1 space, 3 stars 
        ****     -> 0 space, 4 stars 

  my approch  sabse pehle n - i  space print karate phir useke baad n - space karke  stars(*) print karte 
       spaces = n - i;     stars = i;
  */


 int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
 }


/* Que 17  ****     Print in this type 
           ***    
           **                es n = 4     so     apn ko upar n ke hisab se chaiye stats tho   n - i + 1 
           *                  
           ...... 
  */

  // int main (){
  //   int n ;
  //   cin >> n ; 

  //   for ( int i = 1 ; i <= n ; i++){
  //     for (int j = 1 ; j <= n - i +  1 ; j++){
  //       cout<< "*";
  //     }
  //     cout<<endl;
  //   }
  // }



/* Que 18   ****        Print in this type 
             ***    
              **
               *      tho es que mein space bhi print karna hoga 
 */
    int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= i - 1 ; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <=  n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
 }



/* Que 18  1111         Print in this type 
           _222     
           __33
           ___4     tho es que mein space bhi print karna hoga 
 */

 int main (){
    int n ; 
    cin >> n ; 
    
    for( int i = 1 ; i <= n ; i++ ){
      for (int j = 1 ; j <= i -1  ; j++){
        cout<<" ";
      }

      for( int j = 1 ; j <= n - i + 1 ; j ++ ){
        cout<< i ;
      } 
      cout<<endl ;
    }
 }
  
  
  
/* Que 19  ___1          Print in this type 
           __22
           _333
           4444   
 */

  int main (){
    int n ; 
    cin >> n ;

    for(int i = 1  ; i <= n ; i ++){
      for (int j = 1 ; j <= n - i ; j++){
        cout << " " ;
      }

      for(int j =1 ; j <= i ; j++){
        cout << i ;
      }
      cout<<endl ;
    }
  }


/* Que 19    1234        Print in this type 
             234_
             34__
             4___   
 */
  int main (){
    int n ; 
    cin >> n ;

    for(int i = 1  ; i <= n ; i ++){
      for( int j = 1 ; j<= n - i + 1 ; j++){
        cout<< i + j - 1  ;
      }

    for(int j = 1 ; j <= i - 1 ; j ++ ){
      cout << " " ;
    }
    cout<<endl ; 
    }
  }


/* Que 20   ___1        Print in this type 
            __23
            _456
           67910    
 */
  int main (){
    int n ; 
    cin >> n ;

    int count = 1;
    for(int i = 1  ; i <= n ; i ++){
      for( int j = 1 ; j<= n - i  ; j++){
        cout<< " " ;
      }
         // int count = 1 ;  yaha likh ne se  1 , 12 ,123 , 1234 esa print hota kyuki space ke baad print ho raha hai 
      for(int j = 1 ; j <= i ; j ++ ){
      cout << count ;
      count += 1 ; 
    }
    cout<<endl ; 
    }
  }


/* Que 21   ___1        Print in this type 
            __121
            _12321
            1234321    
 */

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }

        // Increasing
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Decreasing
        for(int j = i-1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
 }



/* Que 22   1234554321        Print  this DABAANG type 
            1234**4321
            123****321             
            12******21 
            1********1                  lets seperate this 
                                        12345                    54321
                                        1234        *  *          4321
                                        123        **  **          321
                                        12        ***  ***          21       
                                        1        ****  ****          1
 */

 int main (){
  int n ;
  cin >> n ; 

  for( int i = 1  ; i <= n ; i++) {
    for(int j = 1 ; j <= n - i + 1 ; j++){
      cout<< j ;
    }

    for(int j = 1 ; j <= (i - 1)*2 ; j++){
      cout<< "*" ;
    }

    for(int j = n - i + 1; j >= 1; j--){
    cout << j;
    }
    cout<< endl ;
  }
 }