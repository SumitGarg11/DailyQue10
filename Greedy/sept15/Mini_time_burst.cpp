#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time_to_burst = 0;
        int prev_bust_time = 0;
        for(int i =0; i< colors.size(); i++){
            if( i>0 && colors[i] !=  colors[i-1]){
                prev_bust_time = 0;
            }
            int curr = neededTime[i];
            time_to_burst += min(prev_bust_time, curr);
            prev_bust_time = max(prev_bust_time, curr);
        }
        return time_to_burst;
    }
};