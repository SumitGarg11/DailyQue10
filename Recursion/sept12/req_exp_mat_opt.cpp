#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int t[21][21];
    bool solve(int i, int j, string &s, string &p){
        if(j == p.length()){
            return i==s.length() ;
        }
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        bool first_char_match = false;
        if(i<s.length() && (p[j] == s[i] || p[j] == '.')){
             first_char_match = true;
        }
        if( j+1<p.length() && p[j+1] == '*'){
            bool not_take = solve(i,j+2,s,p);
            bool take =  first_char_match && solve(i+1,j,s ,p);

            t[i][j]  =  not_take || take;
        }
        else{
          t[i][j] = first_char_match && solve(i+1,j+1,s,p);
        }
         
        return t[i][j];
        
    }
    bool isMatch(string s, string p) {
        memset(t,-1,sizeof(t));
        return solve(0,0,s,p);
    }
};