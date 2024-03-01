#include <iostream>
#include <numeric>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &arr)
{
    int n = arr.size();
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        max_ending_here = max(max_ending_here, arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
int maxi(vector<int> &arr)
{
    int max_ = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max_)
        {
            max_ = arr[i];
        }
    }
    return max_;
}
int solution1(vector<int> &arr)
{
    int n = arr.size();
    int max_num = maxi(arr);
    if (max_num < 0)
    {
        return max_num;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
    }
    int neg_max_sum = solution(arr);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
        sum += arr[i];
    }

    return max(solution(arr), sum + neg_max_sum);
}
int main()
{
    vector<int> arr = {2, 1, -5, 4, -3, 1, -3, 4, -1};
    cout << solution1(arr) << endl;
    return 0;
}