class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i=0;
        int bestmax=nums[0];
        int bestmin=nums[0];
        int resmax=nums[0];
        int resmin=nums[0];
        int maxe= INT_MIN;
        int mine= INT_MAX;
        for(i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=bestmax+nums[i];
            bestmax=max(v1,v2);
            resmax=max(resmax,bestmax);
        }
        maxe=max(maxe,resmax);
        

        for(i=1;i<nums.size();i++){
            int v3=nums[i];
            int v4=bestmin+nums[i];
            bestmin=min(v3,v4);
            resmin=min(resmin,bestmin);
        }
        mine=min(mine,resmin);

        return max(abs(maxe),abs(mine));


        
    }
};