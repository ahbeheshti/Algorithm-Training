#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define Loop(i,n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a)
#define InputI(a) int a; cin >> a; 
#define InputLL(a) long long a; cin >> a;
#define InputS(a) string a; cin >> a;
#define InputAI(a , n) int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputALL(a , n) long long a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputS(a) string a; cin >> a;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	InputI(x);
	InputAI(h , n);
	InputAI(s , n);

	ll a[x+1];
	ll best = 0;
	Loop(i , x+1) a[i] = -1;
	a[0]=0;
	Loop(i , n){
		for(int j = x; j >=0 ; j--){
			if(a[j] > -1 && j + h[i] <= x && a[j+h[i]] < a[j] + s[i]){
				a[j+h[i]] = a[j] + s[i];
				best = max(a[j+h[i]] , best);
			}
		}
	}

	cout << best;

	return 0;
}