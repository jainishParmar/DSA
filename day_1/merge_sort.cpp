#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void merge(vector<int> &arr, vector<int> &aux, int low, int mid, int high)
{

    int k = low, i = low, j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            aux[k++] = arr[i++];
        }
        else
        {
            aux[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        aux[k++] = arr[i++];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = aux[i];
    }
}
void merge_sort(vector<int> &arr, vector<int> &aux, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort(arr, aux, start, mid);
    merge_sort(arr, aux, mid + 1, end);
    merge(arr, aux, start, mid, end);
}
int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    vector<int> aux(n);
    merge_sort(arr, aux, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}