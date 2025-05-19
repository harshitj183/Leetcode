class Solution {
public:
    bool isIsomorphic(string s, string t) {
                         if (s.length() != t.length()) 
        
                      {return false;}

        unordered_map<char, char> mapS;
                     unordered_map<char, char> mapT;

        for (int i = 0; i < s.length(); i++) {
                    char chS = s[i];
                           char chT = t[i];

                           if (mapS.count(chS)) {
                if (mapS[chS] != chT) return false;
                         } else {
                                   mapS[chS] = chT;
            }

                                      if (mapT.count(chT)) {
                        if (mapT[chT] != chS) return false;
            } else {
                mapT[chT] = chS;
            }
        }

        return true;
    }
};
