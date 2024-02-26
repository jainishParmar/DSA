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
    int start = 0;
    int mid = 0;
    int pivot = 1;

    while (mid <= n)
    {
        if (arr[mid] < pivot)
        {
            swap(arr, start, mid);
            start++;
            mid++;
        }
        else if (arr[mid] > pivot)
        {
            swap(arr, mid, n);
            n--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{

    vector<int> arr = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    solution(arr, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}