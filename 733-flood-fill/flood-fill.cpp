class Solution {
public:

void solve(vector<vector<int>>& image,
           int sr,
           int sc,
           int oldColor,
           int color){
 
    if (sr < 0){
        return;
    }

    if (sc < 0){
        return;
    }

    if (sr > image.size()-1){
        return;
    }

    if (sc > image[0].size()-1){
        return;
    }
 
    if (image[sr][sc] != oldColor){
        return;
    }
 
    image[sr][sc] = color;
 
    solve(image,sr+1,sc,oldColor,color);
    solve(image,sr,sc+1,oldColor,color);
    solve(image,sr-1,sc,oldColor,color);
    solve(image,sr,sc-1,oldColor,color);
}

vector<vector<int>> floodFill(vector<vector<int>>& image,
                              int sr,
                              int sc,
                              int color) {

    int oldColor = image[sr][sc];
 
    if (oldColor == color){
        return image;
    }

    solve(image,sr,sc,oldColor,color);

    return image;
}
};