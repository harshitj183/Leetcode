class Solution {
public:
    bool checkGoodInteger(int n) {
bool res = false;

  int sum =0;
        int sqsum = 0;
        while(n){

   int rem =  n%10 ;
  n = n/10;

       sum += rem;
         sqsum +=rem * rem;   
        }

if( (sqsum-sum) >=50 ) {
    return true;
}
    return res;    
    }
};