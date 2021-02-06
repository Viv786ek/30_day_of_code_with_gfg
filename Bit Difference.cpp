
class Solution{
    public:
    long long sumBitDiff(int arr[], int n) 
    { 
        int res = 0;
        for (int i = 0; i < 32; i++) 
        { 
            int count =0;
            for (int k=0;k<n;k++)
            {
                if ((arr[k] & (1<<i)))
                    count++; 
            }
         
        res += (count*(n - count)*2); 
    } 
  
    return res; 
        
    } 
};
