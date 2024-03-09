#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = n - 1; i >= 0; i--)
    {
        char ans = 'a';
        for (int j = 0; j <= i; j++)
        {

            cout << ans << " ";
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
 ABC
 AB
 A

 */