#include <bits/stdc++.h>
using namespace std;
void max(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum value is " << max << endl;
}
void minimum(int arr[], int size)
{
    int min = arr[1];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimun value is " << min << endl;
}
int main()
{
    int arr[] = {1, 2, 34, 0, 6, 7, 87, 47};
    max(arr, 8);
    minimum(arr, 8);
    return 0;
}