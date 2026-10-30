 
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        if (points.empty()) return 0;

        sort(points.begin(), points.end());

        int left = points[0][0];
        int right = points[0][1];

        int count = 1;

        for (int i = 1; i < points.size(); i++) {

            // No common intersection
            if (points[i][0] > right) {

                count++;

                left = points[i][0];
                right = points[i][1];
            }
            else {

                // Update common intersection
                left = max(left, points[i][0]);
                right = min(right, points[i][1]);
            }
        }

        return count;
    }
};
 