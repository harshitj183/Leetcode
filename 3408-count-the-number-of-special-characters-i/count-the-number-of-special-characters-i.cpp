#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> lower, upper;

        for (char ch : word) {
            if (ch >= 'a' && ch <= 'z')
                lower.insert(ch);
            else if (ch >= 'A' && ch <= 'Z')
                upper.insert(ch);
        }

        int count = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (lower.count(ch) && upper.count(ch - 'a' + 'A'))
                count++;
        }

        return count;
    }
};