class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.size() != t.size())   return false;
map <char ,int >  res;
map <char,int > res1;
for (auto i : s)  res[i]++;
for (auto k : t)   res1[k]++;
 for (int i =  0; i <res.size();i++){


if (res[i] != res1[i]) return false;
 }



return true;
    }
};