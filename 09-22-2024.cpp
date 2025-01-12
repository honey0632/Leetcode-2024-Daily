// 440. K-th Smallest in Lexicographical Order
// https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    int getReqNum(long a,long b,long &n){
        int gap=0; 
        while(a <= n){
            gap += min(n+1,b)-a;
            a*=10;
            b*=10;
        }
        return gap;
    }
public:
    int findKthNumber(long n, int k) {
        long num = 1;
        for(int i=1; i<k;){
            int req = getReqNum(num,num+1,n);
            if(i+req <= k){
                i+=req;
                num++;
            }else{
                i++;
                num *= 10;
            }
        }
        return num;
    }
};

int main () {
    
     return 0;
}