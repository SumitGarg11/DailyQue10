#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        // T.C O(D) S.C O(D)
        // string s = to_string(num);
        // for(int i =0; i<s.size(); i++){
        //     if(s[i] == '6'){
        //         s[i] = '9';
        //         break;
        //     }
        // }
        // int n = stoi(s);
        // return n;

    int placeV = 0;  // value kitni ho chuki hai num se 
    int placeVSix = -1;
    int temp = num;
    while(temp > 0){
        int rem = temp%10;
        if(rem == 6){
            placeVSix = placeV;
        }
        temp = temp/10;
        placeV++;
    }
    if(placeVSix == -1) return num;
    return num+3*pow(10,placeVSix);
        
    }
};