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
	InputAI(a , n);
	multiset<int> m;
	int count = 0;
	Loop(i , n)
	{
		auto it = m.upper_bound(a[i]);
		if (it == m.end())
		{
			m.insert(a[i]);
			count++;
		}
		else{
			m.erase(it);
			m.insert(a[i]);
		}
	}

	cout << count;

	return 0;
}