// 
// 

#include<bits/stdc++.h>
using namespace std;


// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger {
  public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;
    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;
    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};


class NestedIterator {
public:
    vector<int> flat;
    int ind, size;
    NestedIterator(vector<NestedInteger> &nestedList) {
        makeFlat(nestedList);
        this->ind = 0;
        this->size = flat.size();
    }

    void makeFlat(vector<NestedInteger> &nestedList){
        for(auto it : nestedList){
            if(it.isInteger()){
                this->flat.push_back(it.getInteger());
            }else{
                // makeFlat(it.getList());  uncomment it
            }
        }
    }
    
    int next() {
        if(this->ind >= this->size) return NULL;
        return this->flat[ind++];
    }
    
    bool hasNext() {
        return (this->ind < this->size);
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
int main () {
    
     return 0;
}