// Last updated: 5/2/2026, 11:28:12 pm
class Solution {
public:
    void reverseString(vector<char>& s) {
     int n = s.size();
                         
for (int i =0;i< n/2; i++){

swap(s[i],s[n-i-1]);

}





        }
 
};
