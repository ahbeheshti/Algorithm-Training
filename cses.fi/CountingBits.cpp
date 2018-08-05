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

	InputLL(n);
	ll sum = 0;

	for (ll x = 2; x <= n * 2; x = x * 2)
	{
		sum = sum + (((n+1) - ((n+1)%x))/2);
		if ((n+1) % x > x/2) sum += ((n+1) % x - x/2);
	}

	cout << sum;

	return 0;
}