class Solution {
public:
    int minAddToMakeValid(string s) {
stack<char> stk;

 for(char c : s){
if(!stk.empty() && stk.top() == '(' && c == ')'){

    stk.pop();

    continue;




}

stk.push(c);


 }


    return stk.size();    
    }
};