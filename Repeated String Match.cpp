
class Solution{

    public:
    int repeatedStringMatch(string A, string B) 
    {
        
        int count = B.length() / A.length();
        int result =1;
        string s = A;
        for (int i = 0; i <= count+2; i++)
        {
            if (s.find(B) != string::npos)
                return result;
            else
                s += A;
                result += 1;

        }

        return -1;
    }
  
};
