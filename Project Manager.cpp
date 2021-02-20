
int visit[100005];
int iscount[100005];
int isstack[100005];

class Solution{
	public:

	bool cyclecheck(int i, vector<vector<int>> &vee)
	{
		if(isstack[i] == 1)
			return true;
		isstack[i] = 1;
		for(auto j : vee[i])
		{
			if(visit[j] == 1)
			{
				if(isstack[j] == 1)
					return true;
				continue;
			}
			visit[j] = 1;
			if(cyclecheck(j, vee))
				return true;
		}
		isstack[i] = 0;
		return false;
	}

	int checkdfs(int i, vector<vector<int>> &vee, int durat[])
	{
		if(iscount[i] != -1)
			return iscount[i];
		int y = 0;
		for(auto j : vee[i])
			y = max(y, checkdfs(j, vee, durat));
		iscount[i] = y + durat[i];
		return iscount[i];
	}

	int minTime(vector<pair<int, int>> &vpe, int durat[], int n, int m)
	{
		int inde[n + 5] = {0};
		vector<vector<int>> vee(n + 2);
		for(int i = 0;i < m;i++)
		{
			int a = vpe[i].first;
			int b = vpe[i].second;
			vee[a].push_back(b);
			inde[b]++;
		}

		memset(visit, -1, sizeof(visit));
		memset(iscount, -1, sizeof(iscount));
		memset(isstack, -1, sizeof(isstack));

		int f = 0;
		for(int i = 0;i < n;i++)
			if(inde[i] == 0)
				f = 1;
		if(f == 0)
			return -1;
		for(int i = 0;i < n;i++)
		{
			if(inde[i] != 0)
				continue;
			visit[i] = 1;
			if(cyclecheck(i, vee))
				return -1;
		}

		int sol = 0;
		for(int i = 0;i < n;i++)
			if(inde[i] == 0)
				sol = max(sol, checkdfs(i, vee, durat));
		return sol;
	}
};
