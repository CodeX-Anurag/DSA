/*287. Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
  There is only one repeated number in nums, return this repeated number.
  You must solve the problem without modifying the array nums and using only constant extra space.
  
   
  
Example 1:
 Input: nums = [1,3,4,2,2]
  Output: 2

Example 2:
  Input: nums = [3,1,3,4,2]
  Output: 3*/
  /*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for( int i = 0 ; i < n ; i++){
            for( int j = i + 1 ; j < n ; j++){
                if( nums[i] == nums[j] ){
                    return nums[i] ;
                }
            }
        }
    return 0 ;
    }
};  
 Outer loop → n
 Inner loop → n
 Total comparisons → n × n = O(n²)
 
 Agar n = 100000 ho:
 100000 × 100000 = 10^10 comparisons
 
 Ye bahut zyada hai.
*/

// * Best Solution (Floyd's Cycle Detection / Tortoise and Hare)
/*Ye question linked list cycle jaisa hai.
  
  Example:
  
  nums = [1,3,4,2,2]
  
  Index : 0 1 2 3 4
  Value : 1 3 4 2 2
  
  Har index next index ko point karta hai.
  
  0 -> 1
  1 -> 3
  3 -> 2
  2 -> 4
  4 -> 2
  
  Diagram:
  
  0
  |
  v
  1 --->3
        |
        v
        2<----
        |     |
        v     |
        4------
  
  Duplicate number ki wajah se cycle ban jaati hai.
  
Step 1] : Slow aur Fast
  slow = nums[0];
  fast = nums[0];
  
  do
  {
      slow = nums[slow];
      fast = nums[nums[fast]];
  }
  while(slow != fast);
  
  *) Slow ek step chalega.
  *)Fast do step chalega.
   --> Ek time par dono cycle ke andar mil jayenge.
  
Step 2 ] : Ab slow ko start par le aao.
 
  *)slow = nums[0];
    --> Ab dono ek-ek step chalenge.
  
  while(slow != fast)
  {
      slow = nums[slow];
      fast = nums[fast];
  }
  
  Jahan dono milenge wahi duplicate number hai.
  */

 #include<iostream>
 #include<vector>
 using namespace std ;
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
     return slow;
    }
};