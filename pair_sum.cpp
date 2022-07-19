// coding ninjas

#include <bits/stdc++.h>
int pairSum(vector<int> &arr, int n, int target)
{
    // Write your code here.
    int s = 0, e = n - 1, counter = 0;
    while (s < e)
    {
        if (arr[s] + arr[e] == target)
        {
            counter++;
            s++;
            e--;
        }
        else if (arr[s] + arr[e] < target)
        {
            s++;
        }
        else if (arr[s] + arr[e] > target)
        {
            e--;
        }
    }
    if (counter > 0)
    {
        return counter;
    }
    else
    {
        return -1;
    }
}