class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i != j && nums[i]==2*nums[j]) return true;
            }
        }
            return false;
    }
};