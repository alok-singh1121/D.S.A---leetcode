class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0;
        int best=nums[0];
        int res=nums[0];
        int n=nums.size();
        for(i=1;i<n;i++){
            int v1=nums[i];
            int v2=best+nums[i];
            best=max(v1,v2);
            res=max(res,best);
        }
        return res;
    }
};