#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        if(startValue >= target){
            return startValue- target;
        }
        ///
        // Recursive soln 
        // if(target%2==0){
        //     return 1+brokenCalc(startValue,target/2);
        // }
        // return 1+brokenCalc(startValue, target+1);

        // iterative soln
        int ops = 0;
        while(target>startValue){
            
            if(target%2==0){
                target /= 2;
                ops++;
            }
            else{
                target+=1;
                ops++;
            }
        }
        if(startValue>=target) ops += startValue- target;

        return ops;
    }
};