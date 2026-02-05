// Last updated: 5/2/2026, 11:29:13 pm
class Solution {
public:
    bool isPalindrome(string s) {
        
    int   slen = s.length() ;

string snew;
   char temp; 
    for (int i =0;i<slen;i++){

if (isalpha(s[i])){

 temp  = tolower(s[i]);


    snew.push_back(temp);



    }
 
if (isdigit(s[i])){

  

temp = s[i];
    snew.push_back(temp);
 }
 


}



bool isPalindrome = true;

    int n = snew.length();
    for (int i = 0; i < n / 2; i++) {
        if (snew[i] != snew[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }



return isPalindrome;

    }
};