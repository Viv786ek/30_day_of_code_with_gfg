
class Solution{
    public:
    vector<int> TopK(vector<int>& array, int k)
    {
        int i,j=0;
        int arr[10002];
        for(i=0;i<10002;i++)
            arr[i] = 0;
            
        for(i=0;i<array.size();i++)
            arr[array[i]]++;
        
        vector<int>res[100002];
        
        for(i=0;i<10002;i++)
            {
                if(arr[i]!=0)
                    res[arr[i]].push_back(i);
            }
            
        vector<int>ans;
        for(i=100001;i>=0;i--)
            {
                for(int p = res[i].size()-1;p>=0;p--)
                    {
                        if(j!=k)
                            ans.push_back(res[i][p]);
                        else
                            break;
                        j++;
                    }
            }
        return ans;
    }
};
