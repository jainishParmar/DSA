#include <bits/stdc++.h>
using namespace std;

class priority
{
private:
    int left(int i)
    {
        return (2 * i + 1);
    }
    int right(int i)
    {
        return (2 * i + 2);
    }
    void swap(vector<int> &a, int i, int j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    void heapify(vector<int> &a, int i, int n)
    {

        int l = left(i);
        int r = right(i);

        int largest = i;

        if (l < n && a[l] > a[i])
        {
            largest = l;
        }

        if (r < n && a[r] > a[i])
        {
            largest = r;
        }

        if (largest != i)
        {
            swap(a, i, largest);
            heapify(a, largest, n);
        }
    }

public:
    priority(vector<int> &a, int n)
    {
        int i = (n - 2) / 2;
        while (i >= 0)
        {
            heapify(a, i--, n);
        }
    }

    int pop(vector<int> &a, int n)
    {
        if (n <= 0)
        {
            return -1;
        }

        int top = a[0];
        a[0] = a[n - 1];
        heapify(a, 0, n - 1);
        return top;
    }
};

void heap_sort(vector<int> &a, int n)
{
    priority pq(a, n);

    while (n > 0)
    {
        a[n - 1] = pq.pop(a, n);
        n--;
    }
}
int main()
{

    vector<int> a = {5, 4, 3, 2, 1};
    heap_sort(a, a.size());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    return 0;
}