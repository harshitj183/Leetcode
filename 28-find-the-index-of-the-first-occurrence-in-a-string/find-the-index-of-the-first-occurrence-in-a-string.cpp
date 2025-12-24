class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;

        int h = haystack.size();
        int n = needle.size();
        int j = 0;

        for (int i = 0; i < h; i++) {

            if (haystack[i] == needle[j]) {
                j++;

                if (j == n) {
                    return i - n + 1;
                }
            } else {
                i = i - j;   
                j = 0;
            }
        }
        return -1;
    }
};




 