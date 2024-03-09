#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i
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
 1
 22
 333
 4444
 55555
 */