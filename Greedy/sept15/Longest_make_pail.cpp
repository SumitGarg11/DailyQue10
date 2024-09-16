#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mpp;
        for(auto it : words){
            mpp[it]++;
        }
        bool centerUsed = false;
        int ans = 0;
        for(auto it : words){
            string rev = it;
            reverse(begin(it), end(it));
         if(rev != it){   // ab , ba - 4 length hogi 
            if(mpp[it] > 0 && mpp[rev] > 0){
                ans += 4;
                mpp[rev]--;
                mpp[it]--;
            }
         }
          else{
            if(mpp[it] >= 2){  // abcc ccba  
               mpp[it]-= 2;
               ans +=4;
            }
            else if(mpp[it] ==  1 && centerUsed == false){
                mpp[it]--;
                ans += 2;
                centerUsed=true;
            }
           }

        }
        return ans;
    }
};