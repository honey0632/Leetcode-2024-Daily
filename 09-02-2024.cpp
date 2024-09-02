// 1894. Find the Student that Will Replace the Chalk
// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        vector<long long> sum(n, chalk[0]);// prefix sum 0-indexed 
        for(int i=1; i<n; i++){
            sum[i]=sum[i-1]+chalk[i];
        }
        k%=sum[n-1];

        return upper_bound(sum.begin(), sum.end(), k)-sum.begin();
    
    }
};

int main () {
    
     return 0;
}