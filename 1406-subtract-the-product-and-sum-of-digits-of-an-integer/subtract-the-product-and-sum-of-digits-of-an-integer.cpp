class Solution {
public:
    int subtractProductAndSum(int n) {
int  org  = n ;
int digi ;
int mul = 1;
int sum  = 0;
 while(n>0){
 
 
  digi =  n%10 ;
mul *=digi;
sum += digi;



  n =  n/10 ;
 }

return mul - sum;





    }
};