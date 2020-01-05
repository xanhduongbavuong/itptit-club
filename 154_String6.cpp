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
int stringToNum(char c){
    return c - '0';
}
char numToString(int n){
    return (char)(n+48);
}
void chuanHoa(string &a, string &b){
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');
    }
    else
    {
        a.insert(0, l2-l1, '0');  
    }
}
string sum(string a, string b)  // tong 2 so
{
    string s = "";
    chuanHoa(a,b);
    int l = a.length();
    int temp = 0;
    for (int i=l-1; i>=0; i--)   // duyet va cong
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    // tinh tong tung doi mot
        s.insert(0,1,numToString(temp%10));         // gan phan don vi vao
        temp = temp/10;     // lay lai phan hang chuc
    }
    if (temp>0)  // neu hang chuc > 0 thi them vao KQ
    {
        s.insert(0,1,numToString(temp));
    } 
    return s;
}
void solve(string x1, string x2){
	string tmp1 = x1, tmp2 = x2;
	for(int i = 0; i < x1.length(); i++)
		if(x1[i] == '6') 
			x1[i] = '5';
	for(int i = 0; i < x2.length(); i++)
		if(x2[i] == '6') 
			x2[i] = '5';
	cout << sum(x1, x2) << " ";
	for(int i = 0; i < tmp1.length(); i++)
		if(tmp1[i] == '5') 
			tmp1[i] = '6';
	for(int i = 0; i < tmp2.length(); i++)
		if(tmp2[i] == '5') 
			tmp2[i] = '6';
	cout << sum(tmp1, tmp2) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string x1, x2;
		cin >> x1 >> x2;
		solve(x1, x2);
	}
	return 0;
}

