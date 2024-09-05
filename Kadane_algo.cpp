// Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        int  sum =0;
        int maxi =INT_MIN;
        int n = arr.size();
        for(int i =0; i<n; i++){
            sum += arr[i];
            maxi = max(sum, maxi);
            
            if(sum <0)sum =0;
        }
        return maxi;
    }
