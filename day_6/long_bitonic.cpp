#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void solution(vector<int> &A)
{
    int n = A.size();
    int end_index = 0, max_len = 1, i = 0;

    while (i + 1 < n)
    {
        // check for the longest bitonic subarray starting at `A[i]`

        // reset length to 1
        int len = 1;

        // run till sequence is increasing
        while (i + 1 < n && A[i] < A[i + 1])
        {
            i++, len++;
        }

        // run till sequence is decreasing
        while (i + 1 < n && A[i] > A[i + 1])
        {
            i++, len++;
        }

        // run till sequence is equal
        while (i + 1 < n && A[i] == A[i + 1])
        {
            i++;
        }

        // update the longest bitonic subarray if required
        if (len > max_len)
        {
            max_len = len;
            end_index = i;
        }
    }

    // print the longest bitonic subarray
    printf("The length of the longest bitonic subarray is %d\n", max_len);
    printf("The longest bitonic subarray indices is [%d, %d]",
           end_index - max_len + 1, end_index);
}
int main()
{
    vector<int> arr = {3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4};
    solution(arr);
    print_array(arr);
    return 0;
}