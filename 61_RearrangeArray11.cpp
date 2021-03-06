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
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		b[0] = 1;
		for(int i = 1; i < n; i++){
			int maxx = 0;
			for(int j = i - 1; j >= 0; j--)
				if(a[j] <= a[i])
					maxx = max(maxx, b[j]);
			b[i] = maxx + 1;
		}
		c[n-1] = 1;
		for(int i = n - 1; i >= 0; i--){
			int maxx = 0;
			for(int j = i + 1; j < n; j++)
				if(a[j] <= a[i])
					maxx = max(maxx, c[j]);
			c[i] = maxx + 1;
		}
		int ans = 0;
		for(int i = 0; i < n; i++)
			ans = max(ans, b[i] + c[i] - 1);
		cout << ans << endl;
	}
	return 0;
}

