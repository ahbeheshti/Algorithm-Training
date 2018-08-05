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
#define InputAI(a , n) int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputALL(a , n) long long a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputS(a) string a; cin >> a;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	InputAI(a , n);
	sort(a , a+n);
	ll last = a[0];
	ll sum = 0;
	Loop(i,n)
		sum += abs(a[i] - a[0]);
	ll best = sum;
	ll dif;
	REP(i , 1 , n-1)
	{
		if (last != a[i])
		{
			dif = a[i] - last;
			sum = sum + (dif * i) - (dif * (n - i));
			best = min(sum , best);
			last = a[i];
		}
	}
	cout << best;
	return 0;
}