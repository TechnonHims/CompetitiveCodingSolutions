// Miserably I failed at this Intuitive Question

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define int           long long
#define endl 		  "\n"
#define all(x) 		  x.begin(), x.end()
#define deb(x) 		  cout << #x << " --> " << (x) << endl
#define pb		 	  push_back              
#define mod 		  1000000007 // 1e9 + 7
#define prec(x,y)	  fixed << setprecision(y) << x
#define print(v)	  for(auto x : v) cout << x << " "; cout << endl

void solve(){
	// m is the maximum sum and n is the length of the array
	int n, i, j, _ip, m; cin >> n >> m;
	if(n==1) {
		cout << 0 << "\n";
		return;
	}
	if(n==2) {
		cout << n << "\n";
		return;
	}
	cout << 2*n << "\n";
	return;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    cin >> _t;
    	while(_t--)
    		solve();
}