/*442. Find All Duplicates in an Array

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer 
 appears at most twice, return an array of all the integers that appears twice.
 You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, 
 excluding the space needed to store the output
 
  
 
Example 1:
 Input: nums = [4,3,2,7,8,2,3,1]
 Output: [2,3]
 
Example 2:
 Input: nums = [1,1,2]
 Output: [1]*/


// * Sabhi numbers 1 se n ke beech hain.

 /*Har number ki correct position hoti hai.
  
  1 -> index 0
  2 -> index 1
  3 -> index 2
  4 -> index 3
  ...
  
  Agar koi number apni correct position par nahi hai, to usse uski correct position par swap kar do.
  Agar swap karne jao aur wahan bhi wahi number ho, to duplicate mil gaya.
  
Example
  nums = [4,3,2,7,8,2,3,1]
  i = 0
  nums[0] = 4
  
  4 ki correct position:
  
  index = 4 - 1 = 3
  
  Swap:  [7,3,2,4,8,2,3,1]
  
*)Ab fir nums[0] = 7
  
  Correct index: 6
  
  Swap: [3,3,2,4,8,2,7,1]
  
*)Ab nums[0] = 3
  
  Correct index: 2
  
  Swap: [2,3,3,4,8,2,7,1]
  
*) Ab nums[0] = 2
  
  Correct index: 1
  
  Swap:  [3,2,3,4,8,2,7,1]
  
*) Ab dekho
  
  nums[0] = 3
  
  Correct index bhi 2 hai.
  
  Aur
  nums[2] = 3
  
  Dono same hain.   Matlab 3 duplicate hai, swap nahi karenge.
  
  Next index par chale jayenge.
  */

 #include<iostream>
 #include<vector>
 using namespace std ; 
  class Solution {
  public:
      vector<int> findDuplicates(vector<int>& nums) {
          int i = 0;
  
          while (i < nums.size()) {
              int correct = nums[i] - 1;
  
              if (nums[i] != nums[correct]) {
                  swap(nums[i], nums[correct]);
              }
              else {
                  i++;
              }
          }
          vector<int> ans;
          for (int i = 0; i < nums.size(); i++) {
              if (nums[i] != i + 1) {
                  ans.push_back(nums[i]);
              }
          }
  return ans;
  }
};