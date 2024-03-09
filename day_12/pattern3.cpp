#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 1;
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
 12
 123
 1234
 12345
 */