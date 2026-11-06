
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int> temp = arr;

        sort(temp.begin(), temp.end(), [&](int a, int b) {
            if (abs(a - x) == abs(b - x))
                return a < b;

            return abs(a - x) < abs(b - x);
        });

        temp.resize(k);

        sort(temp.begin(), temp.end());

        return temp;
    }
};
