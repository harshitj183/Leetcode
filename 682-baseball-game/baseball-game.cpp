class Solution {
public:
    int calPoints(vector<string>& operations) {

stack<int> stk;


for(int i =0 ;  i< operations.size();i++){


if(!stk.empty()){

if (operations[i] ==  "D"){

    stk.push(2*stk.top());
    continue;
}
if (operations[i] ==  "C"){


    stk.pop();
    continue;
}
if  (operations[i] ==  "+"){

  int f = stk.top();
  stk.pop();
  int sec = stk.top();
  stk.push(f);


  stk.push(f + sec);

    continue;
}



}
 stk.push(stoi(operations[i]));




}

  int sum = 0;

    while (!stk.empty()) {
        sum += stk.top();
        stk.pop();
    }




return sum;
        
    }
};