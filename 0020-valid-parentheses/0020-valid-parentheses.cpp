class Solution {
public:
    bool isValid(string s) {
        stack<char> br;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                br.push(ch);
            }else{
                if(br.empty()){
                    return false;

                }
                if((ch==')' and br.top()=='(')||
                   (ch=='}' and br.top()=='{')||
                   (ch==']' and br.top()=='[')){
                    br.pop();
                }else{
                    return false;
                }
            }

        }
        return br.empty();
    }
        
};