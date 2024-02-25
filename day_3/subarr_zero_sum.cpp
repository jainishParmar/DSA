#include <bits/stdc++.h>
using namespace std;

bool solution(vector<int> &arr, int size)
{
    unordered_set<int> solution;
    solution.insert(0);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (solution.find(sum) != solution.end())
        {

            return true;
        }
    }
    return false;
}
void solution1(vector<int> &arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                cout << "[" << i << "," << j << "]" << endl;
            }
        }
    }
}
int main()
{
    vector<int> arr = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    if (solution(arr, arr.size()))
    {
        cout << "solution exist" << endl;
    }
    else
    {
        cout << "solution not exist" << endl;
    };

    solution1(arr, arr.size());
    return 0;
}