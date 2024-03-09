#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ans = 'E';
        ans = ans - i;
        for (int j = 0; j <= i; j++)
        {
            cout << ans;
            ans++;
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    solution(n);
    return 0;
}

/*
E
DE
CDE
BCDE
ABCDE
*/