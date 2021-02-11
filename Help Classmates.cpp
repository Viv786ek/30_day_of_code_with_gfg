
class Solution{
    
    public:
    vector<int> help_classmate(vector<int> a, int n) 
    { 
        vector<int> v;
        stack<int> s;
        s.push(n-1);
        v.push_back(-1);
        int i;
        
        for(i=n-2;i>=0;i--){
            while(!s.empty() && a[s.top()] >= a[i]){
                s.pop();
            }
            !s.empty() ? v.push_back(a[s.top()]) : v.push_back(-1);
            s.push(i);
        }
        
        reverse(v.begin(),v.end());
        return v;
    } 
};
