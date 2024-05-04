// 881. Boats to Save People
// https://leetcode.com/problems/boats-to-save-people/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int freq[30001]={0};
        int maxW=0, minW=30001;
        for(int x: people){
            freq[x]++;
            maxW=max(maxW, x);
            minW=min(minW, x);
        }
        for (int i=minW, j=0; i<=maxW; i++){
            int f=freq[i];
            fill(people.begin()+j, people.begin()+j+f, i);
            j+=f;
        }      
        int x=0;
        for(int l=0, r=people.size()-1;l<=r; r--){
            x++;
            if (people[l]+people[r]<=limit)
                l++;          
        }
        return x;
    }
};

int main () {
    
     return 0;
}