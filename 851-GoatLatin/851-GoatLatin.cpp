// Last updated: 5/2/2026, 11:27:13 pm
class Solution {
public:
    string toGoatLatin(string sentence) {
          istringstream iss(sentence);
         string word, result = "";
        int index = 1;
           string vowels = "aeiouAEIOU";

                            while (iss >> word) {
                        if (vowels.find(word[0]) != string::npos) {
                word += "ma";
            } 
            else {
                                 word = word.substr(1) + word[0] + "ma";
            }

                                  word += string(index, 'a');

                            if (!result.empty()) result += " ";
            result += word;
            
            index++;
        }

        return result;
    }
};
