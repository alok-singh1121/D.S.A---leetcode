class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int g=(l+h)/2;
            if(arr[g]==target){
                return g;
            }
            if(arr[g]<target){
                l=g+1;
            }else{
                h=g-1;
            }
        }
        return -1;
        
    }
};