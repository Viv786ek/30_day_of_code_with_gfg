class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int n = A.length();
    	int m = B.length();
    	if( n != m)
    	    return -1;
    	
    	int count[256];
    	memset(count,0,sizeof(count));
    	
    	for(int i=0;i<m;i++){
    	    count[B[i]]++;
    	}
    	for(int i=0;i<m;i++){
    	    count[A[i]]--;
    	}
    	for(int i=0;i<256;i++){
    	    if(count[i] != 0)
    	        return -1;
    	}
    	int res = 0;
    	for(int i= m-1,j=m-1; i >=0;)
    	{
    	    while(i >=0 && A[i] != B[j])
    	    {
    	        i--;
    	        res++;
    	    }
    	    if(i >=0)
    	    {
    	        
    	        i--;
    	        j--;
    	    }
    	}
    	return res;
    	 
    }
};
