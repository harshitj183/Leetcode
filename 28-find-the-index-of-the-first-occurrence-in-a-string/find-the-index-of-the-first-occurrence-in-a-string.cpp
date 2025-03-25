class Solution {
public:

  
 
    int strStr(string haystack, string needle) {

  
 int value  =0;

      if (haystack.find(needle) != string::npos){


 value = haystack.find(needle);


       
    }
    else {

 value = -1;

    }

  
    return  value;
        
    }
};