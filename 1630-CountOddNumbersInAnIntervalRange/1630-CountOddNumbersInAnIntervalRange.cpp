// Last updated: 5/2/2026, 11:26:36 pm
class Solution {
public:
    int countOdds(int low, int high) {

int count = 0;
        for (int i = low ; i<=high;i++)
        {
if (i%2!=0){

count++;


}


        }
        

        return count;
    }
};