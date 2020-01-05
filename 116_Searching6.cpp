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
vector<int>a;
int n;
void init(){
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
bool cmp(int a, int b){
	if(a < 0) a *= -1;
	if(b < 0) b *= -1;
	return (a<b);
}
void solve(){
	init();
	sort(a.begin(), a.end(), cmp);
	int m = abs(a[0] + a[1]);
	int ans = a[0] + a[1];
	for(int i = 1; i < n; i++)
		if(m >= abs(a[i] + a[i-1])){
			m = abs(a[i] + a[i-1]);
			ans = a[i] + a[i-1];
		}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

