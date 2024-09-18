#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;
        for(int i =0; i<piles.size(); i++){
            pq.push(piles[i]);
            sum+= piles[i];
        }
        for(int i =1; i<=k; i++){
            int maxElem = pq.top();
            pq.pop();
            int rem = maxElem / 2;
            sum -= rem;
            maxElem -= rem;
            pq.push(maxElem);
        }
        return sum;
    }
};