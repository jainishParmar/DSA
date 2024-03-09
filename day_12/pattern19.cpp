#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{
    for (int i = n; i > 0; i--)
    {
        int space = 2 * (n - i + 1) - 2;
        for (int l = 1; l <= i; l++)
        {
            cout << l;
        }
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        int space = 2 * (n - i + 1) - 2;
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << i - l + 1;
        }

        cout << endl;
    }
}
int main()
{
    int n = 4;
    solution(n);
    return 0;
}

/*
1______1
12____21
123__321
12344321



 */