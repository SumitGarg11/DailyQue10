// Minimum Jumps
// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&category=Arrays&company=Amazon&sortBy=submissions
class Solution {
  public:
    int minJumps(vector<int>& arr) {
       int n = arr.size();
       if(n <= 1) return 0;
       int maxRange = arr[0];
       int step= arr[0];
       int jump = 1;
       if(arr[0] == 0) return -1;
       int i = 1;
       for(i = 1; i<n; i++){
           if(i == n-1) return jump;
           maxRange = max(maxRange,i+arr[i]);
           step--;
           if(step == 0){
               jump++;
               if(i>=maxRange){
                   return -1;
               }
               step = maxRange -i;
           }
           
       }
       return -1;
    }
};
