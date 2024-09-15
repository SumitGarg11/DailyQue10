#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(int i, int j, string &s, string &p){
        if(j == p.length()){
            return i==s.length() ;
        }
        bool first_char_match = false;
        if(i<s.length() && (p[j] == s[i] || p[j] == '.')){
             first_char_match = true;
        }
        if( j+1<p.length() && p[j+1] == '*'){
            bool not_take = solve(i,j+2,s,p);
            bool take =  first_char_match && solve(i+1,j,s ,p);

            return not_take || take;
        }
        return  first_char_match && solve(i+1,j+1,s,p);
        
    }
    bool isMatch(string s, string p) {
        return solve(0,0,s,p);
    }
};