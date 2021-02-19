
class Solution{

    public:
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int M, int N) 
    { 
        // Your code goes here
        vector<vector<int> > v(M+1,vector<int>(N+1,INT_MAX));
         queue<pair<int,int>>q;
          vector<vector<bool> >vis(M+1,vector<bool>(N+1,false));
         for(int i=0;i<M;i++){
             for(int j=0;j<N;j++)
             {
                 if(matrix[i][j]=='B')
                 {
                     v[i][j]=0;
                     q.push({i,j});
                     vis[i][j]=true;
                 }
                 else if(matrix[i][j]=='W')
                 v[i][j]=-1;
             }
         }
        while(!q.empty())
         {
             pair<int, int> cur = q.front();
			q.pop();
			pair<int, int> dirs[4] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
			for (auto dir : dirs) {
				int nx = dir.first + cur.first;
				int ny = dir.second + cur.second;
				if (nx >= 0 && nx < M && ny >= 0 && ny < N && matrix[nx][ny] !='W' && !vis[nx][ny]) {
					q.push({ nx, ny });
					v[nx][ny] = min(v[cur.first][cur.second] + 1,v[nx][ny]);
					vis[nx][ny]=true;
				}
			}
         }
      for(int i=0;i<M;i++){
             for(int j=0;j<N;j++)
             {
                 if(v[i][j]==INT_MAX)
                 {
                     v[i][j]=-1;
                 }
                 
             }
         }
         return v;
    } 
};
