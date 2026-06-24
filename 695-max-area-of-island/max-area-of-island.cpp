class Solution {
public:



void solve(vector<vector<int>>& grid, int i ,int j, int &are){

if(i <0 || j <0|| i >= grid.size() || j >= grid[0].size() || grid[i][j]== 0)
{
    
    return;
    
    }

 grid[i][j]=0;

solve(grid,i+1,j,are);
solve(grid,i,j+1,are);
solve(grid,i,j-1,are);
solve(grid,i-1,j,are);
are++;


}




    int maxAreaOfIsland(vector<vector<int>>& grid) {
        


int maxval =0; 


        for(int i =0 ; i < grid.size();i++){


            for(int j =0 ; j<grid[0].size();j++){

if(grid[i][j] == 1){
         int are =0;

         solve(grid,i,j,are);

       maxval=  max(maxval,are);
          
}
            }
        }





return maxval; 

    }
};