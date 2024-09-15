// class Solution {
// public:
//     int countDigitOne(int n) {
//         int cnt =0;
//         for(int i =1; i<=n; i++){
//             string str = to_string(i);
//             cnt+= count(str.begin(),str.end(),'1');

//         }
//         return cnt;
//     }
// };
// t.c = o(n*logn) 
// s.c = o(logn) counter and convert string 
