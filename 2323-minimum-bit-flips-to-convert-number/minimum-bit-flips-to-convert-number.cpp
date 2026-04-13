class Solution {
public:
    int minBitFlips(int start, int goal) {


 
       
        int count  = 0;
int z =  start ^ goal;


while(z > 0){

if (z & 1 ){
    count++;
    }



   z=  z>>1;
   



}

        return count;



        
    }
};