class Solution
{
    public:
    int build_bridges(string str1, string str2)
    {
        int i,j;
        int s1=str1.size(), s2=str2.size();
        
        vector<vector<int>>eff(s1+1,vector<int>(s2+1,0));
        for(i=1;i<=s1;++i)
        {
            for(j=1;j<=s2;++j)
            {
                if(str1[i-1]==str2[j-1])eff[i][j]=1+eff[i-1][j-1];
                else eff[i][j]= max(eff[i-1][j],eff[i][j-1]);
            }
        }
        return eff[s1][s2];
    }
};
