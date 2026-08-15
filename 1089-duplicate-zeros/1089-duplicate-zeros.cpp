class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        int n= nums.size();
        for (int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=n-1;j>i;j--){
                    nums[j]=nums[j-1];
                }
                if(i+1<n){
                    nums[i+1]=0;
                }
                i++;
            }
        }
    }
};