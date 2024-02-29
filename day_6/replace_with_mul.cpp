#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void solution(vector<int> &arr)
{
    int n = arr.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = 1;
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] * arr[i - 1];
    }
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = left[i] * right[i];
    }
}
int main()
{
    vector<int> arr = {5, 3, 4, 2, 6, 8};
    solution(arr);
    print_array(arr);
    return 0;
}