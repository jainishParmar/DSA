#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int size)
{

    sort(arr.begin(), arr.end());
    int max1 = arr[0] * arr[1];
    int max2 = arr[size - 1] * arr[size - 2];

    if (max1 > max2)
    {
        cout << "(" << arr[0] << "," << arr[1] << ")" << endl;
    }
    else
    {
        cout << "(" << arr[size - 2] << "," << arr[size - 1] << ")" << endl;
    }
}
int main()
{

    vector<int> arr = {-10, -3, 5, 6, -20};
    solution(arr, arr.size());
    return 0;
}