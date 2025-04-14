class Solution {
public:

string res = "";
    string intToRoman(int num) { 
 int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; 
 string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int temp = num;
for(int i =0; i <13 ; i++ ){
if (temp >= numbers[i]){

   for (int j = 0; j < temp /numbers[i] ;j++){


res += romans[i];
   }


temp = temp % numbers[i];


}




}  
return res;

  };
};