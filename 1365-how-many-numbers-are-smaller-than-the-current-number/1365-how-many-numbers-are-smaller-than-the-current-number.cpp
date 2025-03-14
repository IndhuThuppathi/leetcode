class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int bucket[102] = {0};  

      
        for (int i = 0; i < nums.size(); i++) {  
            bucket[nums[i]]++;
        }

       
        for (int i = 1; i < 102; i++) {  
            bucket[i] += bucket[i - 1];
        }

       
        vector<int> result(nums.size()); 
        for (int i = 0; i < nums.size(); i++) {  
            if (nums[i] == 0)
                result[i] = 0;  
            else
                result[i] = bucket[nums[i] - 1];  
        }

        return result;
    }
};
