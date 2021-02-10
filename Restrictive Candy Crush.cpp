

class Solution{
    public:
    string Reduced_String(int k,string s)
    {
        int n = s.length();
        int i;
        stack<pair<char, int> > st;
        
        for(i=0;i<n;i++)
        {
            
            if(st.empty() || st.top().first != s[i])
            {
                st.push(make_pair(s[i], 1));
                
                if(st.top().second == k)
                {
                        st.pop();
                }
            }
            else if(!st.empty() && st.top().first == s[i])
            {
                st.push(make_pair(s[i], st.top().second + 1));
               
                if(st.top().second == k)
                {
                    while(!st.empty() && st.top().first == s[i])
                    {
                        st.pop();
                    }
                }
            }
        }
        
        string str = "";
        while(!st.empty())
        {
            str += st.top().first;
            st.pop();
        }
        
        reverse(str.begin(),str.end());
        return str;
    }


};
