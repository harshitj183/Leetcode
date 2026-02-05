// Last updated: 5/2/2026, 11:27:55 pm
class Solution {
public:
    int countSegments(string s) {
  vector<string> words;
string temp;
  for (char i : s){

if (i != ' '){ 
 temp += i; 
 
}
   
else{

if(!temp.empty()){


words.push_back(temp);

temp = "";
}
} 
  }
 if (!temp.empty()) {
            words.push_back(temp);
        }
 
return  words.size() ;
 
    }
};