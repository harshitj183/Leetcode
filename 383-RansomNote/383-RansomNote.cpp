// Last updated: 5/2/2026, 11:28:04 pm
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (char c : ransomNote) {
                       size_t pos = magazine.find(c);
            if (pos == string::npos) {
                     return false;  
                       } else {
                magazine.erase(pos, 1);  
                    }
        }
        return true;
    }
};
