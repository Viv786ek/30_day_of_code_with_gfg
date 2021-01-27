
class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        long res=0;
        long pro=1;
        while(N!=0)
        {
            long digit = N % 9;
            N = N / 9;
            res += (pro * digit);
            pro=pro * 10;
        }
    return res;
    }
};
