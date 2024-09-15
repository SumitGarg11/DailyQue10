// class Solution {
// public:
//     bool solve(int i, int j, string p, string s){
//         if(i<0 && j<0){
//             return true;    //p and s both are excauted
//         }
//         if(i<0 && j >=0) return false;   // p is finish s is not finish
//         if(i>=0 && j <0){         // p is not finsih s is finish , check p have * 
//             for(int ii =0; ii<i; ii++){
//                 if(p[ii] != '*') return false;

//             }
//             return true;
//         }
//         if(p[i] == s[i] || p[i] == '?') {
//             return solve(i-1,j-1,p,s);
//         }
//         if(p[i] == '*'){
//             return solve(i-1,j, p,s) | solve(i,j-1,p,s);
//         }
//         return false;
//     }
//     bool isMatch(string s, string p) {
//         int n= p.size();
//         int m = s.size();
//         return solve(n-1,m-1,p,s);
//     }
// }