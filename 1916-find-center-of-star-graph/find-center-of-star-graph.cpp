class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0], b = edges[0][1];
        int c = edges[1][0], d = edges[1][1];

        // The repeated node in the first two edges is the center
        if (a == c || a == d) return a;
        return b;
    }
};
