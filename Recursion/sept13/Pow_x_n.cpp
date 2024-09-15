#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //  double solve(double x, long n){
    //     if(n==0) return 1;
    //     if(n<0) return solve(1/x,-n);
    //     if(n%2 == 0) return solve(x*x , n/2);
    //     return x * solve(x*x,(n-1)/2);
    //  }
    double myPow(double x, int n) {
        // return solve(x, (long)n);
        //  return pow(x,n);

        long exp = abs((long)n);
        double res = 1.0;
        while(exp>0){
            if(exp %2 == 1){
                res = res * x;
            }
            x=x*x;
            exp/=2;
        }
        return n<0 ? 1.0/res : res;
    }

    
};

// T.c - O(logN) S.c - O(logn) , 
// T.c - O(logN) s.c - O(1);