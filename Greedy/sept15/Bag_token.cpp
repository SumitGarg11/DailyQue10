// class Solution {
// public: 
//     int bagOfTokensScore(vector<int>& tokens, int power) {
//         int score = 0;
//         int maxScore =0;
//         int n = tokens.size();
//         sort(tokens.begin(),tokens.end());
//         int i =0,j=n-1;
//         while(i<= j){
//             if(power >= tokens[i]){
//                 score+=1;
//                 power-=tokens[i];
               
//                 maxScore = max(maxScore,score);
//                  i++;
//             }
//             else if(score>=1){
                
//                     power+=tokens[j];
//                     score-= 1;
//                     j--;
                
//             }
//             else{
//                 return maxScore;
//             }

//         }
//         return maxScore;
//     }
// };