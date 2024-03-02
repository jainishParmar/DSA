#include <bits/stdc++.h>
using namespace std;

bool solution(int n)
{

    int odd = 1;
    while (n > 0)
    {
        n -= odd;
        odd += 2;
    }

    return n == 0;
}
int main()
{
    int n = 27;
    bool answer = solution(n);
    cout << answer << endl;
}
