#include <bits/stdc++.h>
using namespace std;
void negetive_to_left_side(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[] = {12, 11, -13, -5, 6, -7, 5, -3, -6};
    negetive_to_left_side(arr, 9);
    printArray(arr, 9);

    return 0;
}