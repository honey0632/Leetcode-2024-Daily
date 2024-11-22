// 2516. Take K of Each Character From Left and Right
// https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int takeCharacters(string s, int k)
    {
        const int n = s.size();
        int freq[3] = {0};
        for (char c : s)
            freq[c - 'a']++;
        if (any_of(freq, freq + 3, [k](int f)
                   { return f < k; }))
            return -1;
        //    print(freq);
        int ans = n;
        for (int l = 0, r = 0; r < n; r++)
        {
            int x = s[r] - 'a';
            freq[x]--;
            while (l <= r && any_of(freq, freq + 3, [k](int f)
                                    { return f < k; }))
            {
                freq[s[l] - 'a']++;
                l++;
            }
            ans = min(ans, n - (r - l + 1));
        }
        return ans;
    }
};
int main()
{

    return 0;
}