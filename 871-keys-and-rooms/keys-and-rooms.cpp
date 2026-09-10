class Solution {
public:

    void dfs(vector<vector<int>>& rooms, int idx, vector<bool>& visited) {

        if (visited[idx]) {
            return;
        }

        visited[idx] = true;   

        for (int i = 0; i < rooms[idx].size(); i++) {
            dfs(rooms, rooms[idx][i], visited);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        vector<bool> visited(rooms.size(), false);

        dfs(rooms, 0, visited);

        for (bool vis : visited) {
            if (!vis) {
                return false;
            }
        }

        return true;
    }
};