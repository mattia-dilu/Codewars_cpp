void dfs(vector<vector<int>>& arr, vector<vector<int>> &grid, int i, int j, int& count)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0 || arr[i][j] == 1)
            return;
        count++;

        arr[i][j] = 1;
        dfs(arr, grid, i-1, j, count);
        dfs(arr, grid, i+1, j, count);
        dfs(arr, grid, i, j-1, count);
        dfs(arr, grid, i,  j+1, count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count = 0;
        vector<vector<int>> arr(grid.size(),vector<int>(grid[0].size(),0));
        for(int i = 0; i < grid.size(); ++i)
        {
            for(int j = 0; j < grid[0].size(); ++j)
            {
                if(grid[i][j] == 1 && !arr[i][j])
                {
                    int count_i = 0;
                    dfs(arr, grid, i, j, count_i);
                    count = max(count, count_i);
                }
            }
        }
        return count;
    }
};
