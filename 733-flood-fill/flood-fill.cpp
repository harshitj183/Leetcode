class Solution {
public:
    void solve(vector<vector<int>>& image, int sr, int sc,
               int oldColor, int newColor) {

        if (sr < 0 || sc < 0 ||
            sr >= image.size() || sc >= image[0].size())
            return;

        if (image[sr][sc] != oldColor)
            return;

        image[sr][sc] = newColor;

        solve(image, sr + 1, sc, oldColor, newColor);
        solve(image, sr - 1, sc, oldColor, newColor);
        solve(image, sr, sc + 1, oldColor, newColor);
        solve(image, sr, sc - 1, oldColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {

        int oldColor = image[sr][sc];

        if (oldColor == color)
            return image;

        solve(image, sr, sc, oldColor, color);

        return image;
    }
};