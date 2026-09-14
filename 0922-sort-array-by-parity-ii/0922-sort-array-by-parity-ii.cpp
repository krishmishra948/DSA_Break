class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int even =0;
        int odd =1;
        while(even < nums.size() && odd < nums.size()){
                 // Find Wrong odd Position 
        while(even < nums.size() && nums[even] % 2==0){
            even+=2;
        }
            // Find Wrong odd Position 
            while(odd< nums.size() && nums[odd] %2 ==1){
                odd+=2;
            }
            // Swap the wrong elements 
            if(even < nums.size() && odd < nums.size()){
                swap(nums[even],nums[odd]);
            }
        }
            return nums;
    }
};