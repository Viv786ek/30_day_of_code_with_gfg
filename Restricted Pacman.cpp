
class Solution{
    public:
    int candies(int m, int n) 
    { 
    	
    	int X = (m * n) - m - n; 
    
    	unordered_set<int> s;
    	queue<int> q; 
    	q.push(X); 
    	s.insert(X);
    
    	int count = 0; 
    	while (q.size() > 0) 
    	{
    		int curr = q.front(); 
    		q.pop(); 
    		count++;
    
    		int k = curr-m;
    		if (k > 0 && (s.find(k) == s.end())) 
    		{
    			q.push(k); 
    			s.insert(k);
    		}
    
    		k = curr-n;
    		if (k > 0 && (s.find(k) == s.end())) 
    		{
    			q.push(k); 
    			s.insert(k);
    		}
    	} 
    	return count; 
    } 
};
