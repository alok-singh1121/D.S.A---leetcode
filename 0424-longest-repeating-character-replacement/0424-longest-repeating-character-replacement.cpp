class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> counts(26, 0);
        int left = 0, maxCount = 0, maxLength = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            
            maxCount = max(maxCount, ++counts[s[right] - 'A']);
            
            
            if ((right - left + 1) - maxCount > k) {
                counts[s[left] - 'A']--;
                left++;
            }
            
           
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
