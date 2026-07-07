class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int id=0;
        vector<int> arr(n+m);
        while(i<m and j<n){
            if(nums1[i]<=nums2[j]){
                arr[id]=nums1[i];
                i++;
                id++;
            }
            else{
                arr[id]=nums2[j];
                j++;
                id++;
            }
        }
        while(i<m){
            arr[id]=nums1[i];
            i++;
            id++;
        }
        while(j<n){
            arr[id]=nums2[j];
            j++;
            id++;
        }
        for(int k=0; k<m+n;k++){
            nums1[k]=arr[k];
        }
      
        
   
    }
     
};