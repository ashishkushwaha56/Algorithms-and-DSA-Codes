#include<bits/stdc++.h>
using namespace std;

class solution{
public:
    bool  should_i_swap(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second){
            return a<b;
        }
        return a.second>b.second;
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++){
            m[arr[i]] +=1;
        }
        sort(m.begin(),m.end(),should_i_swap);
        vector<int>v;
        for(auto it:m){
            v.push_back(it.first);
        }
        return v;
    }
};
 
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r", stdin);
    //     freopen("output.txt","w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    solution s1;
    vector <int> v1 = s1.sortByFreq(arr,n);
    for(int i = 0; i<n; i++){
        cout<<v1[i]<<" ";
    }
}