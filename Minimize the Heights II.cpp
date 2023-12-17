#include <bits/stdc++.h>
using namespace std;


typedef vector <int> vi;
typedef pair <int, int> pi;
typedef vector <string> vs;
typedef pair <int,string> pis;
typedef long long ll;

//macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i = a; i<=b;i++)
#define print(x) cout << x 
#define println(x) cout << x << '\n'
#define printsp(x) cout << x << ' '
#define input(x) cin >> x
#define loop(x, a, b) for(ll x = a; x < b; x++) 
// #define debug(x) cout<<#x<<" "; _print(x);
// #define sort(x) sort(x.begin(), x.end())
// #define reverse(x) reverse(x.begin(), x.end())


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(stack <T> v){ while(!v.empty()){ _print(v.top()); v.pop(); cerr << endl;}}
/*
---------------------------------------------------------------------------------------------------------------------------------------------------
*/

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        int b[n];
        for(int i = 0; i<n; i++){
            if(arr[i] - k <0){
                b[i] = arr[i] +k;
                arr[i] = arr[i]+k;
                
            }
            else{
                b[i] = arr[i]+k;
                arr[i] = arr[i]-k;
                
            }
        }
        for(int i=0; i<n; i++){
            debug(arr[i])
            debug(b[i])
        }
        sort(arr,arr+n);
        sort(b,b+n);
        for(int i=0; i<n; i++){
            debug(arr[i])
            debug(b[i])
        }
        int min_a = arr[n-1]-arr[0];
        int min_b = b[n-1]-b[0];
        return (min_a<min_b?min_a:min_b);
    }
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    freopen("Error.txt", "w", stderr);
  #endif

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}