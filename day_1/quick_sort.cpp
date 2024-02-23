#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int pivot_index(vector<int> &arr, int start, int end)
{

    int index = start;
    int pivot = arr[end];
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr, index, i);
            index++;
        }
    }
    swap(arr, index, end);

    return index;
}
void quick_sort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = pivot_index(arr, start, end);
    quick_sort(arr, start, pivot - 1);
    quick_sort(arr, pivot + 1, end);
}
int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}