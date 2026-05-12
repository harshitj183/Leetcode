class Solution {

    void solve(vector<char>& s, int idx, int fin, int size) {

        if (idx >= fin) {
            return;
        }

        swap(s[idx], s[size - idx - 1]);

        solve(s, idx + 1, fin, size);
    }

public:
    void reverseString(vector<char>& s) {

        int size = s.size();
        int fin = size / 2;

        solve(s, 0, fin, size);
    }
};