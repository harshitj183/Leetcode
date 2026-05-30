class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int five = 0;
        int tenth = 0;

        for(int i = 0; i < bills.size(); i++) {

            if(bills[i] == 5) {
                five++;
            }

            else if(bills[i] == 10) {

                if(five == 0)
                    return false;

                five--;
                tenth++;
            }

            else { // bills[i] == 20

                if(tenth > 0 && five > 0) {
                    tenth--;
                    five--;
                }
                else if(five >= 3) {
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};