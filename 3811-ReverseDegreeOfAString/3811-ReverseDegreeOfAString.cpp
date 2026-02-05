// Last updated: 5/2/2026, 11:25:56 pm
class Solution {
public:
    int reverseDegree(string s) {
     int asciiValue; 
     int asciiValue1; 
int  revasc;
     int  count  =0;
     int mul;
     int i =1;

for (char c : s){
  asciiValue = static_cast<int>(c);    
 asciiValue1  =   asciiValue -96;
 revasc = 27 - asciiValue1;
   mul = revasc * i;
count += mul;
i++;
}
return count;
    }
};



 


