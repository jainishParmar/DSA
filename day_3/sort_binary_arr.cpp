#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int n)
{
    int count = 0;
    int i = 0;
    while (i <= n)
    {
        if (arr[i] == 0)
        {
            count++;
        }
        i++;
    }
    int j = 0;
    while (j <= count)
    {
        arr[j++] = 0;
    }
    while (j <= n)
    {
        arr[j++] = 1;
    }
}
void swap(vector<int> &arr, int i, int j)
{

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void solution1(vector<int> &arr, int n)
{

    int pivot = 1;
    int left = 0;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr, i, left);
            left++;
        }
    }
}
int main()
{

    vector<int> arr = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0};
    // solution(arr, arr.size() - 1);
    solution1(arr, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}