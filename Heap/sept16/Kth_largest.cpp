#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int> ,greater<int>> pq;
        for(auto it : nums){
            pq.push(it);
            int size = pq.size();
            if(size>k){
                pq.pop();
            }

        }
        return pq.top();

    }
};