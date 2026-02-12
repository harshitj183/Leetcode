class Solution {
public:
    int maxProduct(int n) {
int  mul = 1;
vector <int> temp;
 
while(n> 0){
int rem  = n%10;

temp.push_back(rem);
 
n = n/10;

}

sort(temp.begin(),temp.end(),[](int   a, int  b) {
         return a > b;
     });
return temp[0]*temp[1];

    }
};