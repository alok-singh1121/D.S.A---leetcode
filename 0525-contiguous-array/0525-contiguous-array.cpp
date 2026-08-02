class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        int zeros=0;
        unordered_map<int,int> f;
        int res=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeros++;
            }else{
                ones++;
            }
            int diff=zeros-ones;
            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            if(f.find(diff)==f.end()){
                f[diff]=i;

            }
            else{
                int idx=f[diff];
                int len=i-idx;
                res= max(len,res);
            }
        }
        return res;
        
    }
};