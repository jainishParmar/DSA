#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int target)
{

    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == target)
            {
                count++;
                cout << count << "solution exist" << endl;
            }
        }
    }
}
int main()
{
    vector<int> arr = {2, 6, 0, 9, 7, 3, 1, 4, 1, 10};
    int target = 15;
    solution(arr, target);

    return 0;
}