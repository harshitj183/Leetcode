class Solution {
public:
    bool isAnagram(string s, string t) {

   


   if ( s.length() != t.length()){

    return false;
   }

unordered_map<int ,int > map;

        for(int i =0; i< s.size();i++){

           
map[s[i]]++;
map[t[i]]--;

 
        }

for (auto var : map){


    if (var.second){

        return false;
    }
}

 return true;       
    }
};