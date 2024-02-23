#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selection_sort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr, min, i);
    }
}
int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}
