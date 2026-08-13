/*448. Find All Numbers Disappeared in an Array

Given an array nums of n integers where nums[i] is in the range [1, n],
 return an array of all the integers in the range [1, n] that do not appear in nums.

Example 1:
 Input: nums = [4,3,2,7,8,2,3,1]
 Output: [5,6]

Example 2:
 Input: nums = [1,1]
 Output: [2]*/

 #include<iostream>
 #include<vector>
 using namespace std ; 

  class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
           int n = nums.size();
        vector<int> freq(n+1,0);
        vector<int> ans;

        for(int i=0;i<n;i++){
            freq[nums[i]] = 1;
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){   
                ans.push_back(i);
            }
        }
        return ans;
    }
}; 
 /*Yahan hum sirf ye mark kar rahe hain:

"Ye number array mein mila hai."
 
 Example: nums = [4,3,2,7,8,2,3,1]
 
 Frequency array initially:
 
 freq = [0,0,0,0,0,0,0,0,0]
         0 1 2 3 4 5 6 7 8
 
 Ab numbers ko mark karte hain:
 
 4 → freq[4] = 1
 3 → freq[3] = 1
 2 → freq[2] = 1
 7 → freq[7] = 1
 8 → freq[8] = 1
 2 → freq[2] = 1
 3 → freq[3] = 1
 1 → freq[1] = 1
 
 Final:
 
 freq = [0,1,1,1,1,0,0,1,1]
         ↑         ↑ ↑
         0         5 6
 
 Ab hume missing numbers chahiye.
 
 Isliye: if(freq[i] == 0) ka matlab: "Ye number array mein ek baar bhi nahi mila."
 
 To:
 5 → freq[5] = 0 → missing
 6 → freq[6] = 0 → missing
 
 Answer: [5,6]


]Last question se difference
 
 Last wale Two Sneaky Numbers mein hum ye check kar rahe the:
 
 if(freq[x] == 2)
 
 Kyun?  Kyuki us question mein hume duplicate chahiye tha.
 
 Example:  nums = [0,1,1,0]
 
 Frequency:
 
 0 → 2 times
 1 → 2 times
 
 Jab: freq[x] == 2 hota hai, iska matlab: Ye number second time mila hai → duplicate hai.
 
 Isliye answer mein daal diya.
*/