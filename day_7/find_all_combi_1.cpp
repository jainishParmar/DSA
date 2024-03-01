#include <iostream>
#include <set>
#include <vector>
#include <experimental/iterator>
using namespace std;

void findCombinations(vector<int> const &arr, int i, int k,
                      set<vector<int>> &subarrays, vector<int> &out)
{
    if (arr.size() == 0 || k > arr.size())
    {
        return;
    }

    if (k == 0)
    {
        subarrays.insert(out);
        return;
    }

    for (int j = i; j < arr.size(); j++)
    {
        out.push_back(arr[j]);
        findCombinations(arr, j + 1, k - 1, subarrays, out);
        out.pop_back();
    }
}

template <typename T>
void printVector(vector<T> const &input)
{
    cout << "[";
    copy(begin(input),
         end(input),
         experimental::make_ostream_joiner(cout, ", "));
    cout << "]\n";
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int k = 2;

    set<vector<int>> subarrays;

    vector<int> out;

    findCombinations(arr, 0, k, subarrays, out);

    for (auto const &vec : subarrays)
    {
        printVector(vec);
    }

    return 0;
}