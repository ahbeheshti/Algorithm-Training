#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define Loop(i,n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a)
#define InputI(a) int a; cin >> a; 
#define InputLL(a) long long a; cin >> a;
#define InputS(a) string a; cin >> a;
#define InputAI(a , n) int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputALL(a , n) long long a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputS(a) string a; cin >> a;

bool ok(ll x , int k , int n ,int * a){
	int arrayNum = 0;
	ll current = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > x)
			return false;

		if (current + a[i] <= x)
		{
			current += a[i];
		}
		else
		{
			current = a[i];
			arrayNum++;
		}
	}
	arrayNum ++;
	return (arrayNum <= k);
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	InputI(k);
	InputAI(a , n);
	ll sum = 0;
	Loop(i , n) sum += a[i];

	ll x = -1;
	for (ll i = sum; i >= 1; i= i / 2)
		while(!ok(x+i , k , n , a)) 
			x+=i;

	cout << x+1;

	return 0;
}