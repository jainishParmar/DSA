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

    for (int i = n - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
        swap(arr, i, j);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    solution(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}