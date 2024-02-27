#include <bits/stdc++.h>
using namespace std;

void solution2(vector<int> &X, vector<int> &Y, int m, int n)
{

    int k = m + n + 1;
    while (m >= 0 && n >= 0)
    {
        if (X[m] > Y[n])
        {
            X[k--] = X[m--];
        }
        else
        {
            X[k--] = Y[n--];
        }
    }

    while (n >= 0)
    {
        X[k--] = Y[n--];
    }
}
void solution(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    if (n1 == 0)
    {
        return;
    }

    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        if (arr1[i] != 0)
        {
            arr1[k++] = arr1[i];
        }
    }
    solution2(arr1, arr2, k - 1, arr2.size() - 1);
}
int main()
{

    vector<int> arr1 = {0, 2, 0, 3, 0, 5, 6, 0, 0};
    vector<int> arr2 = {1, 8, 9, 10, 15};
    solution(arr1, arr2);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}