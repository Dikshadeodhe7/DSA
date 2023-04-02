// Input:
// N = 5, K = 16
// Arr[] = {9, 7, 2, 16, 4}
// Output: 4
// Explanation: K = 16 is found in the
// given array at position 4.

class Solution{
public:
	int search(int arr[], int n, int k) {
	    // code here
	    
	    for(int i = 0; i <= n; i++) {
	        if(arr[i] == k){
	            return i+1;
	        }
	    }
	    return -1;
	}
};