class Solution
{
    public:
    int maxFrequency(string S)
    {
    	int result = 0;
    	string required;
    	int length = S.length();
    	for (int i=1; i<length; i++) 
    	{
    	    if (S.substr(0, i) == S.substr(length - i, i))
    	    {
    	        required = S.substr(0, i);
    	        break;
    	    }
    	}
    	for (int i=0; i<=length - required.length(); i++) 
    	{
    	    if (S[i] == required[0]) 
    	    {
    	        int j = 0;
    	        for (j=0; j<required.length(); j++) 
    	        {
    	            if (required[j] != S[i + j])
    	                break;
    	        }
    	        if (j == required.length())
    	            result += 1;
    	    }
    	}
    	return result;
    }
};
