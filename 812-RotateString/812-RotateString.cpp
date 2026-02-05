// Last updated: 5/2/2026, 11:27:16 pm
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if (s.length() != goal.length()) {
            return false;
        }
         
        string doubled_s = s + s;
         
                             return doubled_s.find(goal) != string::npos;
    }
};