#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &arr)
{
    int n = arr.size();
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    int start = 0;
    int end = 0;
    int beg = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here += arr[i];
        if (max_ending_here < arr[i])
        {
            max_ending_here = arr[i];
            beg = i;
        }
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = beg;
            end = i;
        }
    }

    cout << "The contiguous subarray with the largest sum is ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    return max_so_far;
}
int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << solution(arr) << endl;
    return 0;
}