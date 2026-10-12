class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double> set;
        int i=0;
        int j=nums.size()-1;
        while(i < nums.size()-1){
            double avg=(nums[i]+nums[j])/2.0;
            set.insert(avg);
            i++;
            j--;
        }
        return set.size();
    }
};