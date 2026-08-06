class Solution {
public:
    int maximumWidth(vector<int>& planks) {

        map<long long, int> mapv;
        map<long long, int> freq;

        // Frequency store karo
        for (int i = 0; i < planks.size(); i++) {
            freq[planks[i]]++;
        }

        // Single planks
        for (auto &it : freq) {
            mapv[it.first] = it.second;
        }

        // Unique values ko vector me store karo
        vector<pair<long long, int>> arr;

        for (auto &it : freq) {
            arr.push_back(it);
        }

        int n = arr.size();

        // Pair contribution
        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                long long sum = arr[i].first + arr[j].first;

                if (i == j) {
                    mapv[sum] += arr[i].second / 2;
                }
                else {
                    mapv[sum] += min(arr[i].second, arr[j].second);
                }
            }
        }

        int mx = 1;

        for (auto &it : mapv) {
            mx = max(mx, it.second);
        }

        return mx;
    }
};