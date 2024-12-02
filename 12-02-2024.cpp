// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        // Split the sentence into words
        istringstream stream(sentence);
        string word;
        int index = 1; // 1-based index
        
        while (stream >> word) {
            // Check if the word starts with the searchWord
            if (word.find(searchWord) == 0) {
                return index;
            }
            index++;
        }
        
        // Return -1 if no word starts with the searchWord
        return -1;
    }
};

int main() {
    
     return 0;
}