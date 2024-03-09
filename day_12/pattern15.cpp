#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ans = 'A' + i;
        for (int j = 0; j <= i; j++)
        {

            cout << ans << " ";
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
 A
 BB
 CCC

 */