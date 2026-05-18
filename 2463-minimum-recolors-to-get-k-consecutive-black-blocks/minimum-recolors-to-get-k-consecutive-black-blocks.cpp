class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        




int mincount =INT_MAX;
        for(int i = 0 ; i+k-1 < blocks.size();i++){
      
 
int cnt =0;
    // for (int j = i; j <=k-1;j++){
for (int j = i; j <= i + k - 1; j++){


        if (blocks[j] == 'W'){


            cnt++;
        }




    }


    mincount = min(mincount , cnt) ;
    }

return mincount;
        }
    };
