#include <bits/stdc++.h>
using namespace std;
int basicCal(string s){
    int number = 0;
    int result = 0;
    int sign =1;
    stack<int> st;
    for(int i =0; i<s.size(); i++){
        if(isdigit(s[i])){
            number = number *10 + (s[i]-'0');
        }
        else if(s[i] == '+'){
            result += sign*number;
            number = 0;
            sign = 1;

        }
        else if(s[i] == '-'){
            result += sign*number;
            number = 0;
            sign = -1;
        }
        else if(s[i] == '('){
            st.push(result);
            st.push(sign);
            number = 0;
            sign = 1;
        }
        else if (s[i]== ')'){
            result+= sign*number;
            number = 0;
            int stack_sign = st.top(); st.pop();
            int last_res = st.top(); st.pop();
            result *= stack_sign;
            result+= last_res;
        }

    }
    result+=sign*number;
    return result;

}
int main(){

}