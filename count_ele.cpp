#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        //code here.
        stack<int> s1, s2, s3;
        for (int i = 0; i < n1; i++)
        {
            s1.push(A[i]);
        }
        for (int i = 0; i < n2; i++)
        {
            s2.push(B[i]);
        }
        for (int i = 0; i < n3; i++)
        {
            s3.push(C[i]);
        }
        vector<int> v;
        set<int> ss;
        while (true)
        {
            if (s1.empty() || s2.empty() || s3.empty())
            {
                break;
            }
            if (s1.top() < s2.top())
            {
                s2.pop();
            }
            if (s1.top() < s3.top())
            {
                s3.pop();
            }
            else if (s1.top() == s2.top() && s1.top() == s3.top())
            {
                ss.insert(s1.top());
                s1.pop();
                s2.pop();
                s3.pop();
            }
            else if (s1.top() > s2.top() || s1.top() > s3.top())
            {
                s1.pop();
            }
        }
        // vector<int> ans;
        for (auto it : ss)
        {
            v.push_back(it);
        }
        // sort(v.begin(), v.end());
        // int j = 0;
        // for(int i =0; i<v.size();i++){
        //     if(ans.empty()){
        //         ans.push_back(v[i]);
        //         j++;
        //     }
        //     auto it = --ans.end();
        //     // int temp = j;
        //     if(v[i] == *it){
        //         continue;
        //     }
        //     else{
        //         ans.push_back(v[i]);
        //         j++;
        //     }
        // }
        return v;
        // ;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for (int i = 0; i < n1; i++)
            cin >> A[i];
        for (int i = 0; i < n2; i++)
            cin >> B[i];
        for (int i = 0; i < n3; i++)
            cin >> C[i];

        Solution ob;

        vector<int> res = ob.commonElements(A, B, C, n1, n2, n3);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
} // } Driver Code Ends