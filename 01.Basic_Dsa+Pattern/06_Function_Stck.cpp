/*📘 Function Call Stack Notes (C++)
What is a Function Call Stack?

A Function Call Stack is a memory structure that stores information about all the currently executing (active) function calls.

It follows the LIFO (Last In, First Out) principle.

Last Function Called
        ↓
+---------------+
|   Function C  | ← Top
+---------------+
|   Function B  |
+---------------+
|   Function A  |
+---------------+
|    main()     |
+---------------+
LIFO Principle
Last In → First Out*/
  
   #include <iostream>
   using namespace std;

   // Example 1 
   void greet()
   {
       cout << "Hello\n";
   }
   
   int main()
   {
       cout << "Start\n";
   
       greet();
   
       cout << "End\n";
   }
   


  // EXAMPLE 2 
   void C()
   {
       cout << "Inside C\n";
   }
   
   void B()
   {
       cout << "Inside B\n";
       C();
   }
   
   void A()
   {
       cout << "Inside A\n";
       B();
   }
   
   int main()
   {
       A();
}