class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here
        sort(a, a + n);

        long int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= 0)
                continue;
        long int j = lower_bound(a, a + n, -a[i] + 1) - a;
        count += (i - j);
        }
    return count;
    }   
};
