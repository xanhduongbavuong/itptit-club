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
string a, b;
void init(){
	cin >> a >> b;
}
char numtochar(int num){
	return char(num + 48);
}
int chartonum(char c){
	return c - '0';
}
void chuanhoa(string &a, string &b){
	int la = a.length(), lb = b.length();
	if(la >= lb){
		b.insert(0, la - lb, '0');
	}
	else
		a.insert(0, lb - la, '0');
}
string sum(string a, string b){
	string res = "";
	chuanhoa(a, b);
	int l = a.length();
	int temp = 0;
	for(int i = l - 1; i >= 0; i--){
		temp = chartonum(a[i]) + chartonum(b[i]) + temp;
		res.insert(0, 1, numtochar(temp % 10));
		temp /= 10;
	}
	if(temp > 0){
		res.insert(0, 1, numtochar(temp));
	}
	return res;
}
void solve(){
	init();
	cout << sum(a, b) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
