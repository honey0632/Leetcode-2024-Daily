// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> st;

        int  n = t.size();

        for(int i=0;i<n;i++){
            if(t[i]!="+" && t[i]!="-" && t[i]!="*" && t[i]!="/"){
                st.push(stoi(t[i]));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(t[i]=="+") st.push(b+a);
                if(t[i]=="-") st.push(b-a);
                if(t[i]=="*") st.push(b*a);
                if(t[i]=="/") st.push(b/a);

            }
        }
        return st.top();
    }
};

int main () {
  
   return 0;
}