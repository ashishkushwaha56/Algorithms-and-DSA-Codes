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


int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

long long maxSumsubarrya(long long arr[], long long n){
	long long sum = 0;
	long max_ele = -10000000;
	for(auto i = 0; i<n; i++){
		for(auto j = i; j<n; j++){
			sum+=arr[j];
			max_ele = max(max_ele, sum);
		}
	}
	return sum;
}


int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    freopen("Error.txt", "w", stderr);
  #endif
   long long n;
   cin>>n;
   for(auto i = 0; i<n; i++){
   	cin>>arr[i];
   }
   cout<<maxSumsubarrya(arr,n);
return 0;
}
