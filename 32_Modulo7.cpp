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
ull solve(ull a[], ull n){
	sort(a, a + n);
	ull d = a[n-1] - a[0];
	vector <ull> v;
	for(ull i = 1; i * i <= d; i++)
		if(d % i == 0){
			v.PB(i);
			if(i != d/i)
				v.PB(d/i);
		}
	ull ans = 0;
	for(ull i = 0; i < v.size(); i++){
		ull tmp = a[0] % v[i];
		ull j;
		for(j = 1; j < n; j++)
			if(a[j] % v[i] != tmp)
				break;
		if(j == n) 
			ans++;
	}		
	return ans;
}
int main(){
	int t;
	ull n, *a;
	cin >> t;
	while(t--){
		cin >> n;
		a = new ull[n];
		for(ull i = 0; i < n; i++)
			cin >> a[i];
		cout << solve(a, n) << endl;
	}
	return 0;
}

