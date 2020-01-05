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
bool p[1000007];
int n;
void Sang(){
	memset(p, true, sizeof(p));
	p[0] = false; p[1] = false;
	for(int i = 2; i * i <= 1000006; i++)
		if(p[i])
			for(int j = i * i; j <= 1000006; j += i)
				p[j] = false;
}
void solve(){
	cin >> n;
	for(int i = 2; i < n; i++){
		if(p[i] && p[n-i]){
			cout << i << " " << n - i << endl;
			return;
		}
	}
	cout << "-1" << endl;
}
int main(){
	int t;
	cin >> t;
	Sang();
	while(t--){
		solve();
	}
	return 0;
}

