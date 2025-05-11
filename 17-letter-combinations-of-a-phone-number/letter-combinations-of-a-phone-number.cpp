#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits == "") return {};

        vector<string> mapping[10];
        mapping[2] = {"a", "b", "c"};
        mapping[3] = {"d", "e", "f"};
        mapping[4] = {"g", "h", "i"};
        mapping[5] = {"j", "k", "l"};
        mapping[6] = {"m", "n", "o"};
        mapping[7] = {"p", "q", "r", "s"};
        mapping[8] = {"t", "u", "v"};
        mapping[9] = {"w", "x", "y", "z"};

        vector<string> result = {""};

        for (int i = 0; i < digits.size(); i++) {
                               int digit = digits[i] - '0';
            if (digit < 2 || digit > 9) continue;

                       vector<string> temp;
                       for (int j = 0; j < result.size(); j++) {
                                      for (int k = 0; k < mapping[digit].size(); k++) {
                    temp.push_back(result[j] + mapping[digit][k]);
                }
            }
                           result = temp;
        }

        return result;
    }
};
