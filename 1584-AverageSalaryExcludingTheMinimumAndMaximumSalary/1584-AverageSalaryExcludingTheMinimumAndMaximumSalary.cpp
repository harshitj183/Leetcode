// Last updated: 5/2/2026, 11:26:38 pm
class Solution {
public:
    double average(vector<int>& salary) {
                  int n = salary.size();
                         int min = *min_element(salary.begin(), salary.end());
                     int max = *max_element(salary.begin(), salary.end());

        int sum = 0;
                    for (int s : salary) {
            sum += s;
        }

        
        double avg = (sum - min - max) / (double)(n - 2);
                    return avg;
    }
};
