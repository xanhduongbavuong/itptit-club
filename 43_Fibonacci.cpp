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
ll n;
vector <ll> f(20);
vector <ll> a;
void Fibo(){
	f[0] = 0; f[1] = 1;
	for(int i = 2; i < 20; i++){
		f[i] = f[i-1] + f[i-2];
	}
}
void init(){
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
}
void solve(){
	init();
	for(int i = 0; i < n; i++){
		if(binary_search(f.begin(), f.end(), a[i]))
			cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	Fibo();
	while(t--){
		solve();
	}
	return 0;
}

