class Solution {
public:
    int minChanges(string s) {

int count =0 ; 

       for(int i =0 ; i< s.size();i += 2) {
    
if(i+1 <s.size()){

char a= s[i];

 
char b= s[i+1];


if(a !=b){

    count++;
}

}

       }


       return count;
    }
};