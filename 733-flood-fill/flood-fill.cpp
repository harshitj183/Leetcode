
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int orig, int color) {
        int m = image.size(), n = image[0].size();
vector<int> v;
v.reserve(n);

        // Out of bounds
        if (r < 0 || r >= m || c < 0 || c >= n)
            return;

        // Not the target color
        if (image[r][c] != orig)
            return;

        // Fill current cell
        image[r][c] = color;

        // Explore 4-directionally
        dfs(image, r + 1, c, orig, color);
        dfs(image, r - 1, c, orig, color);
        dfs(image, r, c + 1, orig, color);
        dfs(image, r, c - 1, orig, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orig = image[sr][sc];

        // If original color is same as new color, no need to fill
        if (orig == color)
            return image;

        dfs(image, sr, sc, orig, color);
        return image;
    }
};
 