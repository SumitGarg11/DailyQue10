// #include <bits/stdc++.h>
// class Solution {
// public:
//     bool solve(string s, string p){
//         if(p.length()==0){
//             return s.length()==0 ;
//         }
//         bool first_char_match = false;
//         if(s.length()>0 && (p[0] == s[0] || p[0] == '.')){
//              first_char_match = true;
//         }
//         if(  p.length()>=2 && p[1] == '*'){
//             bool not_take = solve(s,p.substr(2));
//             bool take =  first_char_match && solve(s.substr(1), p);

//             return not_take || take;
//         }
//         return  first_char_match && solve(s.substr(1),p.substr(1));
        
//     }
//     bool isMatch(string s, string p) {
//         return solve(s,p);
//     }
// };