// Last updated: 5/2/2026, 11:27:25 pm
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        // Keep repeating until length >= b
        while (repeated.length() < b.length()) {
            repeated += a;
            count++;
        }

        // Check if b is substring
        if (repeated.find(b) != string::npos)
            return count;

        // Try one more repeat (boundary case)
        repeated += a;
        count++;

        if (repeated.find(b) != string::npos)
            return count;

        return -1;
    }
};