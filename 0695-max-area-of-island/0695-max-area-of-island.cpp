class Solution {
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};

    int dfs(vector<vector<int>>& image,int i,int j,int m,int n){

        if(i<0 || j<0 || i>=m || j>=n || image[i][j]==0)
            return 0;

        image[i][j]=0;

        int area=1;

        for(int k=0;k<4;k++){
            area+=dfs(image,i+dx[k],j+dy[k],m,n);
        }

        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        int mx=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(grid[i][j]==1){

                    mx=max(mx,dfs(grid,i,j,m,n));

                }
            }
        }

        return mx;
    }
};