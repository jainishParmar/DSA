#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &arr)
{

    int n = arr.size();

    int answer = arr[0];
    int max_ending = arr[0], min_ending = arr[0];

    for (int i = 1; i < n; i++)
    {

        int temp = max_ending;
        max_ending = max(arr[i], max(arr[i] * max_ending, arr[i] * min_ending));
        min_ending = min(arr[i], min(arr[i] * temp, arr[i] * min_ending));
        answer = max(answer, max_ending);
    }

    return answer;
}
int main()
{
    vector<int> arr = {-6, 4, -5};
    cout << solution(arr) << endl;
    return 0;
}