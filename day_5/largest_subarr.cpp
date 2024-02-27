#include <bits/stdc++.h>
using namespace std;
void solution(vector<int> &arr, int n)
{
    set<int> s;
    // insert and erase
    int i = 0;
    int j = 0;

    int maxi = -1;
    // 2 0
    for (int k = 0; k < n; k++)
    {
        if (s.find(arr[k]) != s.end())
        {

            maxi = max(maxi, i - j);
            j++;
            s.erase(arr[k]);
        }
        else
        {

            i++;
        }

        s.insert(arr[k]);
    }

    cout << maxi << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5, 6};

    solution(arr, arr.size());
    return 0;
}