class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int result = 0; 
    	vector<int> thief; 
    	vector<int> police; 
    
    	for (int i = 0; i < n; i++) { 
    		if (arr[i] == 'P') 
    			police.push_back(i); 
    		else if (arr[i] == 'T') 
    			thief.push_back(i); 
    	} 
    	int l = 0, r = 0; 
    	while (l < thief.size() && r < police.size()) 
    	{ 
    
    		if (abs(thief[l] - police[r]) <= k)
    		{ 
    			result++; 
    			l++; 
    			r++; 
    		} 
    		else if (thief[l] < police[r]) 
    			l++; 
    		else
    			r++; 
    	} 
    	return result; 
    }
};
