class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;

        int n = s.size();
        int count = 1;      
        int prev = 1;    

        for (int i = 1; i < n; i++) {
            int curr = 0;
 
            if (s[i] != '0') {
                curr += count;
            }

           
            int two = (s[i-1]-'0') * 10 + (s[i]-'0');
            if (two >= 10 && two <= 26) {
                curr += prev;
            }

            prev = count;
            count = curr;
        }

        return count;
    }
};