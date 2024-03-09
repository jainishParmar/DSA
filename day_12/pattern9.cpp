#include <bits/stdc++.h>
using namespace std;
void solution(int n)
{

    for (int i = 0; i < n; i++)
    {
        int star = 2 * i + 1;
        int space = n - i - 1;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < space; l++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int star = 2 * i + 1;
        int space = n - i - 1;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < star; k++)
        {
            cout << "*";
        }
        for (int l = 0; l < space; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 3;
    solution(n);
    return 0;
}

/*
      *
    * * *
  * * * * *
  * * * * *
    * * *
      *





 */