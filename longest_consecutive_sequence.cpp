#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_set>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    // Write your code here.
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (s.find(arr[i] - 1) != s.end())
        {
            continue;
        }
        else
        {
            int count = 0;
            int current = arr[i];
            while (s.find(current) != s.end())
            {
                count++;
                current++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}