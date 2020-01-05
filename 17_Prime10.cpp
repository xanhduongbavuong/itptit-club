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
bool p[100007];
ll n;
void Sang(){
	memset(p, true, sizeof(p));
	p[0] = 0; p[1] = 0;
	for(ll i = 2; i * i <= 100006; i++)
		if(p[i])
			for(ll j = i * i; j <= 100006; j += i)
				p[j] = false;
}
ll sum(ll n){
	ll s = 0;
	while(n){
		s += (n % 10);
		n /= 10;
	}
	return s;
}
void solve(){
	cin >> n;
	if(p[n]){
		cout << "NO\n";
		return;
	}
	else{
		ll temp = n;
		ll sumd = 0;
		while(n % 2 == 0){
			sumd += 2;
			n /= 2;
		}
		for(ll i = 3; i <= n; i += 2){
			while(n % i == 0){
				sumd += sum(i);
				n /= i;
			}
		}
		if(sumd == sum(temp))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
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

