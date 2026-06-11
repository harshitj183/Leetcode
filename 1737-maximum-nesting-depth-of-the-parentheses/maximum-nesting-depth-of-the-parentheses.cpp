class Solution {
public:
    int maxDepth(string s) {
       
 stack<char>stk;

int sz=0;

 for(int  i =0; i < s.size();i++){
 if (s[i] =='('){


    stk.push('(');
    sz = max((int)stk.size(),sz);
 
continue;

 }
if (s[i]  == ')'){


   stk.pop();
}


 }      
       
       
       
       
       
       
       
       
       
      return sz; 
       
          }
};