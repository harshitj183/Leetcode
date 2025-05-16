class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        string temp = "";
 
        if (str1 + str2 != str2 + str1) {
            return temp;   
        }
 
        int len1 = str1.size();
        int len2 = str2.size();
 
        while (len2 != 0) {
            int rem = len1 % len2;
            len1 = len2;
            len2 = rem;
        }
 
        for (int i = 0; i < len1; i++) {
            temp = temp + str1[i];
        }

        return temp;
    }
};
