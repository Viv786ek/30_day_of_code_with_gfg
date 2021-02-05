
class Solution{
    public:
    string compress(string s)
    {
        string temp;
        int n = s.size();
        
        vector<int> vec(n);
        
        for(int i=1;i<n;i++)
        {
            int j =vec[i-1];
            
            while(j>0 && s[i]!=s[j])
                j=vec[j-1];
            
            if(s[i]==s[j])
                j++;
                
            vec[i]=j;
        }
        for(int i=n-1;i >= 0;i--)
        {
            if(i % 2)
            {
                if(vec[i] >= (i+1) / 2 && (i+1) % (2 * (i+1 - vec[i])) == 0)
                {
                    temp.push_back('*');
                    i /= 2;
                    i++;
                }
                else
                {
                    temp.push_back(s[i]);
                }
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        
        return temp;
    }
};

