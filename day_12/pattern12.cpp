#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++, count++)
        {
            cout << count
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
 23
 456

 */