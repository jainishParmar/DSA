#include <bits/stdc++.h>
using namespace std;
void solution(vector<int> &arr, int sum)
{
    int n = arr.size();
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == sum)
            {
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    cout << max_len << endl;
}
int main()
{
    vector<int> arr = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    solution(arr, 8);
    return 0;
}