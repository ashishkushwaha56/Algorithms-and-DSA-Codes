// My Approach
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        // code here
        int start = 0;
        int end = n - 1;
        int mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == 1)
            {
                start = mid + 1;
            }
            if (arr[mid] == 0)
            {
                end = mid - 1;
            }
        }
        if (arr[mid] == 0)
        {
            return (n - mid);
        }
        return (n - 1 - mid);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends