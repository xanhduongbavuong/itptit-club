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
ull n, r;
const ull p = 1000000007;
void init(){
	cin >> n >> r;
}
ull nCrMp(ull n, ull r){
	ull C[r+1];
	memset(C, 0, sizeof(C));
	C[0] = 1;
	for(ull i = 1; i <= n; i++){
		for(ull j = min(i, r); j > 0; j--)
			C[j] = (C[j] + C[j-1]) % p;
	}
	return C[r];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		cout << nCrMp(n, r) << endl;
	}
	return 0;
}

