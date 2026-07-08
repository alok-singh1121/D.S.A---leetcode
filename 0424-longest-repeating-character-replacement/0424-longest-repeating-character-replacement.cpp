class Solution {
public:
    int characterReplacement(string s, int k) {
       int arr[256]={0};
       int low=0,high=0;
       int res= INT_MIN;
       int n=s.size();
       int maxfeq=0;
       for(high=0;high<n;high++)
       {
           arr[s[high]]++;
           int len=high-low+1;
           maxfeq=max(maxfeq,arr[s[high]]);
           int diff=len-maxfeq;
           while(diff>k){
            arr[s[low]]--;
            low++;
            maxfeq=max(maxfeq,arr[s[high]]);
            len=high-low+1;
            diff=len-maxfeq;
           }
           len=high-low+1;
           res=max(len,res);
        }  
       return res;
       
            


    }
};
