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
int ds[125];

int dem(string s){
	for(int i = 0; i <= 122; i++)
		ds[i] = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 65 && s[i] <= 90)
			ds[s[i]] = 1;
		if(s[i] >= 97 && s[i] <= 122)
			ds[s[i]] = 1;
	}
	int dema = 0, demA = 0;
	for(i = 65; i <= 90; i++)
		if(ds[i] == 1) 
			demA++;
	for(i = 97; i <= 122; i++)
		if(ds[i] == 1) 
			dema++;
	if(dema > demA){
		
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		if(s.length() < 26){
			cout << "0\n";
			continue;
		} 
		
	}
	return 0;
}

