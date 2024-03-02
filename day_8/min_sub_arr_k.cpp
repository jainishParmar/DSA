#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int k)
{

    int n = arr.size();
    if (n == 0 || n <= k)
    {
        return;
    }

    int window_sum = 0;
    int min_sum = INT_MAX;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        window_sum += arr[i];
        if (i + 1 >= k)
        {
            if (min_sum > window_sum)
            {
                min_sum = window_sum;
                end = i;
            }
            window_sum -= arr[i + 1 - k];
        }
    }
    printf("The minimum sum subarray is (%d, %d)", end - k + 1, end);
}
int main()
{
    vector<int> arr = {10, 4, 2, 5, 6, 3, 8, 1};
    int k = 3;
    solution(arr, k);
    return 0;
}