class Solution{

	public:
	int find_min(int a[], int n, int k) {
        // Your code geos here
        int no_of_pairs = 0;
        int sum =0;
        for(int i=0;i<n;i++){
            no_of_pairs += a[i] / 2;
            if(a[i] % 2 ==0)
                sum += (a[i] - 2) / 2;
            else
                sum += (a[i] - 1) / 2;
        }
        
        if(k > no_of_pairs)
            return -1;
        if(k <= sum) 
            return 2 * (k - 1) + n + 1;
        
        return 2 * sum + n + (k - sum);
    }

};
