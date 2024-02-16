// 1481. Least Number of Unique Integers after K Removals
// https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int findLeastNumOfUniqueInts(vector<int> &arr, int k)
	{
		map<int, int> mp;
		for (auto it : arr)
		{
			mp[it]++;
		}
		vector<int> freq;
		for (auto it : mp)
		{
			freq.push_back(it.second);
		}

		sort(begin(freq), end(freq));

		int count = 0;
		for (int &f : freq)
		{
			if (k >= f)
			{
				k -= f;
				count++;
			}
			else
			{
				break;
			}
		}

		return freq.size() - count;
	}
};

int main()
{

	return 0;
}