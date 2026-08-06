class Solution {
int mul(int val){
    if(val == 0) return 1;
int rem = 1;
rem  *= val % 10 ; 
 val = val / 10;
return rem * mul(val);

}



public:
    int smallestNumber(int n, int t) {
  

int def = mul(n);
while(def % t !=0){

 

def = mul(++n);

}




return n;
    }
};