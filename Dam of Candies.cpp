class Solution{
    
    public:
    int maxCandy(int height[], int n) 
    { 
        // Your code goes here
        int i=0;
        int j = n-1,ma_x=0;
        while(i<j)
        {
            
            ma_x = max(ma_x,min(height[i] ,height[j])*(j-i-1));
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ma_x;
    }   
};
