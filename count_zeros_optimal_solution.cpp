#include <bits/stdc++.h>

using namespace std;
// As we have given that all the 1s are at the left part of the array and all the 0s are at the right side of aarya then in this situation we can apply the binary search in the array so that we can find the index at which 0s starts

class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        // code here
        int start = 0;
        int end = n - 1;
        int mid;
        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid] == 0 && arr[mid-1] == 1){
                return (n-mid);
            }
            if(arr[mid] == 1){
                start = mid+1;
            }
            if(arr[mid] == 0 && mid!=0){
                end = mid-1;
            }
        }
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