// 380. Insert Delete GetRandom O(1)
// https://leetcode.com/problems/insert-delete-getrandom-o1/

#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
private:
    unordered_map<int, int> mp;
    vector<int> v;
    int size = 0;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())return 0;

        mp[val] = size+1;
        v.push_back(val);
        size++;
                cout<<size<<endl;
        return 1;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())return 0;
        
        int i = mp[val]-1; 
        int j = size -1;

        int temp = v[j];
        cout<<temp<<endl;
        v[i] = v[j];
        mp[v[j]] = i+1;

        v.pop_back();
        mp.erase(val);
        size--;
        cout<<size<<endl;
        return 1;
    }
    
    int getRandom() {
                cout<<size<<endl;
        int rnd = rand() % size;
        return v[rnd];
    }
};

int main () {
  
   return 0;
}