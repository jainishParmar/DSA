#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}

void solution1(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == target)
        {
            cout << "(" << arr[left] << "," << arr[right] << ")" << endl;
            left++;
            right--;
        }

        if (arr[left] + arr[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
}
void solution2(vector<int> &arr, int target)
{

    unordered_map<int, int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (answer.find(target - arr[i]) != answer.end())
        {
            cout << "(" << arr[answer[target - arr[i]]] << "," << arr[i] << ")" << endl;
        }
        answer[arr[i]] = i;
    }
}
int main()
{
    vector<int> arr = {8, 7, 2, 5, 3, 1};
    int target = 10;
    // solution(arr, target);
    // solution1(arr, target);
    solution2(arr, target);
    return 0;
}