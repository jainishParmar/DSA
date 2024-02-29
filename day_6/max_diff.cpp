#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr)
{

    int answer = 0;

    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i] - arr[j];
            if (temp <= answer)
            {
                answer = temp;
            }
        }
    }

    cout << abs(answer) << endl;
}
int main()
{
    vector<int> arr = {2, 7, 5, 5, 1, 3, 5};
    solution(arr);
    return 0;
}