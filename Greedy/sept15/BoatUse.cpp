#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i = 0;
        int n = people.size();
        int j = n-1;
        int boatUse = 0;
        sort(people.begin(), people.end());
        while(i<=j){
            if(people[i]+people[j] <= limit){
                boatUse++;
                i++;
                j--;
            }
            else{
                j--;
                boatUse++;
            }
        }
        return boatUse;
    }
};