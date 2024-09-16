#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
      
        int count = 0;
        for(int i=0; i<n; i++){
            capacity[i]= capacity[i]-rocks[i];
            if(capacity[i] == 0){
                count++;
            }
           
        }
        sort(capacity.begin(), capacity.end());
        for(int i =0; i<n; i++){
        if(capacity[i]>0){
            if(additionalRocks>= capacity[i]){
                    
                additionalRocks-=capacity[i];
                count++;
            }
            else{
                break;
            }
         }
            
        }
        return count;
    }
};