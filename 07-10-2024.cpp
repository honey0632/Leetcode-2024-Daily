// 1598. Crawler Log Folder
// https://leetcode.com/problems/crawler-log-folder/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int step = 0;
        for (const auto& log : logs) {
            if (log == "../") {
                if (step > 0) step--;
            } else if (log != "./") {
                step++;
            }
        }
        return step;
    }
};

int main () {
    
     return 0;
}