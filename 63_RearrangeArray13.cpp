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
		int n, m;
		cin >> n >> m;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		int x = a[0] - 1;
		int b[m];
		for(int i = 0; i < m; i++)
			cin >> b[i];
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(b[i] == a[j]){
					cout << a[j] << " ";
					a[j] = x;
				}
				else if(a[j] > b[i])
					break;
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] != x)
				cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

