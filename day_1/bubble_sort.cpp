#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble_sort(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                flag = true;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}
int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}