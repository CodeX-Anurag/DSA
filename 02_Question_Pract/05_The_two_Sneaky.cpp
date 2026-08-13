/*[**3289. The Two Sneaky Numbers of Digitville**](https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/)

In the town of Digitville, there was a list of numbers called `nums` containing integers from `0` to `n - 1`. Each number was supposed to appear **exactly once** in the list, however, **two** mischievous numbers sneaked in an *additional time*, making the list longer than usual.
As the town detective, your task is to find these two sneaky numbers. Return an array of size **two** containing the two numbers (in *any order*), so peace can return to Digitville.
 
Example 1:
 Input:** nums = [0,1,1,0]
 Output:** [0,1]
 Explanation: The numbers 0 and 1 each appear twice in the array.*/
 #include<iostream>
 #include<vector>
 using namespace std ; 
 class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        int n = nums.size();
        vector<int> freq(n, 0);
        vector<int> ans;
        for (int x : nums) {
            freq[x]++;

            if (freq[x] == 2) {
                ans.push_back(x);
            }
        }
      return ans;
    }
};

// * Method 2 (Brute Force - Nested Loops)

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            bool already = false;

            // Check ki ye number pehle answer me aa chuka hai ya nahi
            for (int k = 0; k < ans.size(); k++) {
                if (ans[k] == nums[i]) {
                    already = true;
                    break;
                }
            }
            if (already)
                continue;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }
     return ans;
    }
};
 