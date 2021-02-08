class Solution{
    
    public:
    int digitSum(int n) 
    {
        int sum = 0;
        for (; n> 0; n /= 10) {
            sum += n % 10;
        }
        return sum;
    }
    int RulingPair(vector<int> arr, int n) 
    { 
    	using sum_t = int;
        using number_t = int;
        
        unordered_map<sum_t, number_t> unmap;
        int maxSum = 0;
        for (auto i : arr)
        {
            int s = digitSum(i);
            if (!unmap.count(s))
                unmap[s] = i;
            else 
                maxSum = max(maxSum, unmap[s]+i);
                unmap[s] = max(i, unmap[s]);
        }
        return maxSum ? maxSum : -1;
    	
    }   
};
