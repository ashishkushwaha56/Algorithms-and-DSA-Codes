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


vector <int> commonElements(int A[],int B[],int C[],int n1, int n2, int n3){
    vector<int> v;
    int x = 0,y = 0, z = 0;
    int prev1 = INT_MIN;
    int prev2 = INT_MIN;
    int prev3 = INT_MIN;
    while(x<n1 && y<n2 && z<n3){
        while(A[x] == prev1 && x<n1){
            x++;
        }
        while(B[y] == prev2 && y<n2){
            y++;
        }
        while(C[z] == prev3 && z<n3){
            z++;
        }

        if(A[x] == B[y] && A[x] == C[z]){
            v.push_back(A[x]);
            prev1 = A[x];
            prev2 = B[y];
            prev3 = C[z];
            x++;
            y++;
            z++;
        }
        else if(A[x]<B[y]){
            prev1 = A[x];
            x++;
        }
        else if(B[y]<C[z]){
            prev2 = B[y];
            y++;
        }
        else{
            prev3 = C[z];
            z++;
        }
    }
    return v;
}



int main() {

    #ifndef ONLINE_JUDGE
    	freopen("input.txt","r", stdin);
    	freopen("output.txt","w", stdout);
    	freopen("Error.txt", "w", stderr);
  	#endif
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1],B[n2],C[n3];
    loop(i,0,n1){
        cin>>A[i];
    }
    loop(i,0,n2){
        cin>>B[i];
    }
    loop(i,0,n3){
        cin>>C[i];
    }
    vector<int> v1 = commonElements(A,B,C,n1,n2,n3);
    for(auto it:v1){
        cout<<it<<" ";
    }
    return 0;
}