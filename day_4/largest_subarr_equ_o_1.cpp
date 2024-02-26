#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int n)
{
    int max_len = 0;
    int index_i = 0;
    int index_j = 0;
    for (int i = 0; i < n; i++)
    {
        int zero_count = 0;
        int one_count = 0;

        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
            {
                zero_count++;
            }
            else
            {
                one_count++;
            }
            if (zero_count == one_count)
            {
                max_len = max(max_len, j - i + 1);
                index_i = i;
                index_j = j;
            }
        }
    }
    cout << max_len << endl;

    for (int k = index_i; k <= index_j; k++)
    {
        cout << arr[k] << "  ";
    }
}

void solution2(vector<int> &arr, int n)
{

    unordered_map<int, int> map;
    map[0] = -1;
    int len = 0;

    int ending_index = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
        sum += arr[i];

        if (map.find(sum) != map.end())
        {
            if (len < i - map[sum])
            {
                len = i - map[sum];
                ending_index = i;
            }
        }
        else
        {
            map[sum] = i;
        }
    }
    if (ending_index != -1)
    {
        cout << "[" << ending_index - len + 1 << ", " << ending_index << "]";
    }
    else
    {
        cout << "No subarray exists";
    }
}
int main()
{
    vector<int> arr = {0, 1, 0, 1, 1, 1, 1};
    solution(arr, arr.size());
    solution2(arr, arr.size());

    return 0;
}