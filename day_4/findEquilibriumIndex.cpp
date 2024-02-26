#include <bits/stdc++.h>
using namespace std;
void solution(vector<int> &arr, int n)
{

    int leftsum[n];
    leftsum[0] = 0;

    for (int i = 1; i < n; i++)
    {
        leftsum[i] = leftsum[i - 1] + arr[i];
    }
    int right = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (right == leftsum[i])
        {
            printf("Equilibrium Index found at %d\n", i);
        }
        else
        {
            right += arr[i];
        }
    }
}
int main()
{
    vector<int> arr = {0, -3, 5, -4, -2, 3, 1, 0};
    solution(arr, arr.size());
    return 0;
}