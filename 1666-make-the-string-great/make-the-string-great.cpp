class Solution {
public:
    string makeGood(string s) {
        

    stack<char>stk;
 

for(int i  =0 ; i< s.size();i++){
   if (!stk.empty()){

if (abs(stk.top() - s[i]) == 32){


    stk.pop();
    continue;
}

   }
stk.push(s[i]);

}
string res = "";

while(!stk.empty()){
 res = stk.top() + res;
 stk.pop();


}



return res;


    }
};