#include <bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr, int i, int j)
{

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void solution(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i])
        {
            swap(arr, i - 1, i);
        }

        if (i + 1 < n && arr[i + 1] > arr[i])
        {
            swap(arr, i, i + 1);
        }
    }
}
int main()
{
    vector<int> arr = {9, 6, 8, 3, 7};

    solution(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}