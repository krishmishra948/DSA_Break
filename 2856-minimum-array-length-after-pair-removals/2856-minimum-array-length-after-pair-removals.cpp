class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=(n+1)/2;
        int ans=0;
        while(i < nums.size() && j < nums.size()){
            if(nums[i] < nums[j]){
                // pair found 
                ans++;
                i++;
                j++;

            }
            else{
                j++;
            }
        }
        return n-2*ans;
    }
};