#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int start, int end, int target)
{
    // Base Case
    if (start > end)
    {
        return false;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target)
    {
        return true;
    }

    if (target < arr[mid])
    {
        return binarySearch(arr, start, mid - 1, target);
    }

    return binarySearch(arr, mid + 1, end, target);
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};

    if(binarySearch(arr, 0, arr.size()-1, 7))
        cout << "Element Found";
    else
        cout << "Element Not Found";
}
