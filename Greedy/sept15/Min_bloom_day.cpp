#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> vec; // plantTime[i]  growTime[i]
        int n = plantTime.size();
        for(int i =0; i<n; i++){
            vec.push_back({plantTime[i],growTime[i]});
        }
        // sort 
        auto lambda = [](pair<int,int> &P1 , pair<int,int> &P2){
            return P1.second > P2.second  ;
        };
        sort(vec.begin(), vec.end(), lambda);
        int maxBloomDay = 0;
        int prevPlantDays = 0;
        for(int i =0; i<n; i++){
            int currPlantTime = vec[i].first;
            int currGrowTime = vec[i].second;
            prevPlantDays += currPlantTime;
            int currPlantBloomTime = prevPlantDays+currGrowTime;
            maxBloomDay= max(maxBloomDay, currPlantBloomTime);
        }
        return maxBloomDay;

    }
};