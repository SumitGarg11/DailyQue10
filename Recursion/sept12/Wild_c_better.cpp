#include <bits/stdc++.h>
using namespace std ;
class Solution {
public:
    bool solve(int i, int j, string p, string s, vector<vector<int>>dp){
        if(i<0 && j<0){
            return true;    //p and s both are excauted
        }
        if(i<0 && j >=0) return false;   // p is finish s is not finish
        
        if(i>=0 && j <0){         // p is not finsih s is finish , check p have * 
            for(int ii =0; ii<=i; ii++){
                if(p[ii] != '*') return false;

            }
            return true;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(p[i] == s[j] || p[i] == '?') {
            dp[i][j] =  solve(i-1,j-1,p,s,dp);
        }
        else{
        if(p[i] == '*'){
            dp[i][j] = solve(i-1,j, p,s,dp) | solve(i,j-1,p,s,dp);
        }
        else{
            return false;
        }
       
      } 
        return dp[i][j];
    }
    bool isMatch(string s, string p) {
        int n= p.size();
        int m = s.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,p,s,dp);
    }

};