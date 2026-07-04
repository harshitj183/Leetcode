class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        
vector<int>visited(n,0);

for(int i =0 ; i < edges.size(); i++){


visited[edges[i][1]]++;

}

int count =0;
int res = -1;
for(int i  =0  ; i < n;i++){


    if(!visited[i]){
  res =   i;
   count++;
    }


    if(count>1){


        return -1;
    }
}



 return res;
    }
};