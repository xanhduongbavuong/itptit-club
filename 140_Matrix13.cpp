#include <sstream>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <deque>
#include <complex>

#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
#define REP(i,a) for(int i=0,_a=(a); i<_a; i++)
#define FORN(i,a,b) for(int i=(a),_b=(b);i<_b;i++)
#define DOWN(i,a,b) for(int i=a,_b=(b);i>=_b;i--)
#define SET(a,v) memset(a,v,sizeof(a))
#define sqr(x) ((x)*(x))
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define DEBUG(x) cout << #x << " = "; cout << x << endl;
#define PR(a,n) cout << #a << " = "; FOR(_,1,n) cout << a[_] << ' '; cout << endl;
#define PR0(a,n) cout << #a << " = "; REP(_,n) cout << a[_] << ' '; cout << endl;
using namespace std;
typedef unsigned long long ull;
int m, n;
int a[55][55];
int h[55], l[55], r[55];
int res;
void init(){
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
}
void solve(){
	h[0] = -1; h[n+1] = -1;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++)
			h[j] = a[i][j] * (h[j] + 1);
		for(int j = 1; j <= n; j++){
			l[j] = j;
			while(h[l[j] - 1] >= h[j]) l[j] = l[l[j] - 1];
		}
		for(int j = n; j > 0; j--){
			r[j] = j;
			while(h[r[j] + 1] >= h[j]) r[j] = r[r[j] + 1];
		}
		for(int j = 1; j <= n; j++)
			res =  max(res, h[j] * (r[j] - l[j] + 1));
	}
	cout << res << endl;
}
//1 4 4 0 1 1 0 1 1 1 1 1 1 1 1 1 1 0 0
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		solve();
	}
	return 0;
}

