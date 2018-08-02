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
#define InputS(a) string a; cin >> a;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	pair<int , int> a[n]; 
	int x;
	for (int i = 0; i < n; ++i) 
	{
		cin >> x;
		a[i] = MP(x , i);
	}
	sort(a , a+n);
	vector<pair<int , int>> v;
	x=-1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i].first != x)
		{
			x = a[i].first;
		}
		else
		{
			v.PB(MP(a[i].second , a[i-1].second));
		}
	}
	sort(v.begin() , v.end());
	int lastPosition = 0;
	int best = 0;
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		best = max(best , v[i].F - lastPosition);
		lastPosition = max(lastPosition , v[i].S + 1);
	}
	best = max(best , n - lastPosition);
	cout << best;

	return 0;
}