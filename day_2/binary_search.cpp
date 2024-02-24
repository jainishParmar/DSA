#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> &a, int start, int end, int element)
{

    if (start > end)
    {
        return false;
    }

    int mid = (start + end) / 2;
    if (a[mid] == element)
    {
        return true;
    }
    else if (a[mid] > element)
    {
        return binary_search(a, start, mid - 1, element);
    }
    else
    {
        return binary_search(a, mid + 1, end, element);
    }

    return false;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    bool flag = binary_search(a, 0, a.size() - 1, 4);
    if (flag == true)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    cout << endl;
    return 0;
}