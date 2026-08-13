/*
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately,
 due to some error, one of the numbers in s got duplicated to another number in the set,
  which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.
 
Example 1:
 Input: nums = [1,2,2,4]
 Output: [2,3]

Example 2:
 Input: nums = [1,1]
 Output: [1,2]
 */
 
 #include<iostream>
 #include<vector>
 using namespace std ; 
 class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      int n = nums.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        int duplicate, missing;
        for(int i=1;i<=n;i++)
        {
            if(freq[i]==2) duplicate = i;
            if(freq[i]==0) missing = i;
        }
        return {duplicate, missing};
    }
};/*nums2[j] = -1 kyu?
 
 Maan lo:
 
 nums1 = [1, 2, 2, 1]
 nums2 = [2, 2]
 
 Pehli baar:
 
 nums1[i] = 2
 nums2[j] = 2
 
 Match mil gaya:
 
 ans.push_back(2);
 
 Ab nums2 ka ye wala 2 use ho chuka hai.
 
 Isliye: nums2[j] = -1;
 
 kar dete hain.
 
 Ab:nums2 = [-1, 2]
 Matlab hum keh rahe hain:
 
 Pehla 2 already use ho gaya, ise dobara use mat karo.
*/