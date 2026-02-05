// Last updated: 5/2/2026, 11:26:54 pm
class Solution {
public:
    string defangIPaddr(string address) {

        string res ="";
        for(int i =0;i<address.size();i++){

       if (address[i]=='.'){
      res += "[.]";
        continue;
       }

res += address[i];
       
        }
    return res;
    }
};