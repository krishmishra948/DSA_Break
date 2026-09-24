class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    int n=nums.size();
    int digitSum=0;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int digitSum=0;
            while(x > 0){
                digitSum +=x % 10;
                x/=10;
            }
            if(digitSum == i) return i;

        }
        return -1;
    }
};