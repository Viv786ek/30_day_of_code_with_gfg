class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        sort(arr.begin(),arr.end());
        
        int i , j, num = n;
        for(i=0;i<n;++i)
        {
            if(arr[i]>x)
            {
                num = i;
                break;
            }
        }
        vector<int>vec;
        i= num -1;
        j= num;
        while(k--)
        {
            if(i>=0 && j<n)
            {
                if(abs(x-arr[i])<=abs(arr[j]-x))
                {
                    vec.push_back(arr[i]);
                    --i;
                }
                else
                {
                    vec.push_back(arr[j]);
                    ++j;
                }
            }
            else if(i<0)
            {
                vec.push_back(arr[j]);
                ++j;
            }
            else
            {
                vec.push_back(arr[i]);
                --i;
            }
        }
        
        sort(vec.begin(),vec.end());
        return vec;
    }  
};
