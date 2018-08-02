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
	InputI(m);
	InputAI(h , n);
	InputAI(t , m);
	multiset<int> p;
	for (int i = 0; i < n; ++i)
		p.insert(h[i]);
	for (int i = 0; i < m; ++i)
	{
		if (p.size() == 0)
		{
			cout << -1 << "\n";
		}
		else
		{
			auto it = p.upper_bound(t[i]);
			if (it != p.begin())
			{
				it--;
				cout << *it << "\n";
				p.erase(it);
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}


	return 0;
}