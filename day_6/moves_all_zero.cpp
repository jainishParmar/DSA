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
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }
    while (k < n)
    {
        arr[k++] = 0;
    }
}
int main()
{
    vector<int> arr = {1, 0, 2, 0, 30, 4, 5, 0};
    solution(arr);
    print_array(arr);
    return 0;
}