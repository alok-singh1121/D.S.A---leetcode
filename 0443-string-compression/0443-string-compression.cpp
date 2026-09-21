class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0, read = 0;
        while (read < n) {
            char c = chars[read];
            int start = read;
            while (read < n && chars[read] == c) read++;
            int count = read - start;
            chars[write++] = c;
            if (count > 1) {
                for (char d : to_string(count)) chars[write++] = d;
            }
        }
        return write;
    }
};