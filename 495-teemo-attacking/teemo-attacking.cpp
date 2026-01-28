class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int total = 0;

        for (int i = 0; i < n - 1; i++) {
            int gap = timeSeries[i + 1] - timeSeries[i];
            total += min(duration, gap);
        }

        // last attack ka full duration add karo
        total += duration;

        return total;
    }
};
