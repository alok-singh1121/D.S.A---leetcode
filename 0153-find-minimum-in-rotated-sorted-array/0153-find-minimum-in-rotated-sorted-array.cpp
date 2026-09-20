class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int g=(l+h)/2;
            if(nums[g]>nums[n-1]){
                l=g+1;
            }else{
                res=g;
                h=g-1;
            }
        }
        return nums[res];
        
    }
};