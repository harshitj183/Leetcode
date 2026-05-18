class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int nmlcount = 0;
 
        for (int i = 0; i < customers.size(); i++) {

            if (grumpy[i] == 0) {
                nmlcount += customers[i];
            }
        }

        int spcount = 0;
 
        for (int i = 0; i < minutes; i++) {

            if (grumpy[i] == 1) {
                spcount += customers[i];
            }
        }

        int maxsp = spcount;

     
        for (int i = minutes; i < customers.size(); i++) {

 
            if (grumpy[i - minutes] == 1) {
                spcount -= customers[i - minutes];
            }
 
            if (grumpy[i] == 1) {
                spcount += customers[i];
            }

            maxsp = max(maxsp, spcount);
        }

        return nmlcount + maxsp;
    }
};