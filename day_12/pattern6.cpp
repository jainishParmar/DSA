#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j
                 << "  ";
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
 12345
 1234
 123
 12
 1
 */