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
ull n, a[100];
const ull p = 1000000007;
void init(){
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
ull tich(ull a[], ull n){
	ull res = 1;
	for(int i = 0; i < n; i++)
		res = (res * a[i]) % p;
	return res;
}
ull gcd(ull a, ull b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}
ull gcdArray(ull a[], ull n){
	ull res = a[0];
	for(int i = 0; i < n; i++)
		res = (gcd(res, a[i])) % p;
	return res;
}
ull mu(ull x, ull y){
	ull res = 1;
	while(y){
		if(y&1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}
void solve(){
	init();
	cout << mu(tich(a, n), gcdArray(a, n)) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

