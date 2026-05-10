class Solution {
public:
    int calculate(string s) {
        
        int val = 0;
        int num = 0;
        int last = 0;
        char op = '+';
        
        for(int i = 0; i < s.size(); i++) {
            
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            
            if((!isdigit(s[i]) && s[i] != ' ') || i == s.size() - 1) {
                
                if(op == '+') {
                    val += last;
                    last = num;
                }
                else if(op == '-') {
                    val += last;
                    last = -num;
                }
                else if(op == '*') {
                    last = last * num;
                }
                else if(op == '/') {
                    last = last / num;
                }
                
                op = s[i];
                num = 0;
            }
        }
        
        val += last;
        
        return val;
    }
};