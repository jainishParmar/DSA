#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr)
{

    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i;

        while (j > 0 && arr[j - 1] > value)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = value;
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