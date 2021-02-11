
class Solution{
public:
	bool recreationalSpot(int arr[], int n){
		// Your code goes here 
		int min_num = 1000000;
		for(int i=0;i<n;i++){
		    min_num = min(min_num,arr[i]);
		    if(i != 0 && i != n-1){
		        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
		            if(arr[i+1] > min_num){
		                return true;
		            }
		        }
		    }
		}
		return false;
		          
	}
};
