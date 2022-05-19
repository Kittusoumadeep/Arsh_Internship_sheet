class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        int i,var;
        for(i=0;i<n;i++){
            var=nums[i];
            if(var==nums[i+1])
                break;
        }
        return var;
    }
};