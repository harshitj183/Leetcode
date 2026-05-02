class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;

        // first window
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) count++;
        }

        int maxCount = count;

        // slide
        for(int i = k; i < n; i++) {
            if(isVowel(s[i])) count++;        // add
            if(isVowel(s[i - k])) count--;    // remove

            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};