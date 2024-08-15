// 860. Lemonade Change
// https://leetcode.com/problems/lemonade-change/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0, b =0, n = bills.size();

        for(int i=0;i<n;i++){
            if(bills[i]==5)a++;
            else if(bills[i]==10){
                b++; 
                if(a>0)a--;
                else return 0;
            }
            else{
                if(a==0) return 0;
                else if(b>0){
                    b--;
                    a--;
                }
                else{
                    if(a>=3)a-=3;
                    else return 0;
                }
            }
        }
        return 1;
    }
};

int main () {
    
     return 0;
}