

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int arr[] = {9, 8, 7, 2, 4, 3};
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
}
