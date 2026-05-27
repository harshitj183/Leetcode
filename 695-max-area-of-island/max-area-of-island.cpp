class Solution {
public:



void dfs(vector<vector<int>>& grid, int row ,int col ,int & res){

     
        if (row < 0 || col < 0 ||
            row >= grid.size() || col >= grid[0].size() ||
            grid[row][col] !=  1) {
            return;
        }

grid[row][col] = 4;
res++;




        dfs(grid, row - 1, col,res);
        dfs(grid, row + 1, col,res);
        dfs(grid, row, col - 1,res);
        dfs(grid, row, col + 1,res);



   

}
    int maxAreaOfIsland(vector<vector<int>>& grid) {

     


int ult = 0;
    

        for (int i = 0; i < grid.size(); i++) {

            for (int j = 0; j < grid[0].size(); j++) {
                    int res = 0;

                if (grid[i][j] == 1) {

                     dfs(grid, i, j,res);


                     ult = max(res,ult);
                }
            }
        }

        return ult;
    }
};


// class Solution {
// public:

// void dfs(vector<vector<int>>& grid,
//          int row,
//          int col,
//          int &res){

//     // boundary + invalid check
//     if (row < 0 || col < 0 ||
//         row >= grid.size() ||
//         col >= grid[0].size() ||
//         grid[row][col] != 1) {
//         return;
//     }

//     // mark visited
//     grid[row][col] = 4;

//     // increase area
//     res++;

//     // 4 directions
//     dfs(grid, row - 1, col, res);
//     dfs(grid, row + 1, col, res);
//     dfs(grid, row, col - 1, res);
//     dfs(grid, row, col + 1, res);
// }

// int maxAreaOfIsland(vector<vector<int>>& grid) {

//     int ult = 0;

//     for (int i = 0; i < grid.size(); i++) {

//         for (int j = 0; j < grid[0].size(); j++) {

//             int res = 0;

//             if (grid[i][j] == 1) {

//                 dfs(grid, i, j, res);

//                 ult = max(res, ult);
//             }
//         }
//     }

//     return ult;
// }
// };