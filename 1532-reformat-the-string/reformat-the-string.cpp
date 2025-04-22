 

class Solution {
public:
    std::string reformat(std::string s) {
        std::vector<char> letters;
        std::vector<char> digits;
        
        for (char ch : s) {
            if (isalpha(ch)) {
                letters.push_back(ch);
            } else if (isdigit(ch)) {
                digits.push_back(ch);
            }
        }
        
        int letterCount = letters.size();
        int digitCount = digits.size();
        
        if (abs(letterCount - digitCount) > 1) {
            return "";
        }
        
        bool startWithLetter = letterCount >= digitCount;
        std::string result;
        int i = 0, j = 0;
        
        while (i < letterCount && j < digitCount) {
            if (startWithLetter) {
                result += letters[i++];
                result += digits[j++];
            } else {
                result += digits[j++];
                result += letters[i++];
            }
        }
        
        if (i < letterCount) {
            result += letters[i];
        }
        if (j < digitCount) {
            result += digits[j];
        }
        
        return result;
    }
};