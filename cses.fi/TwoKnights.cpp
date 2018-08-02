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
#define InputS(a) string a; cin >> a;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);

	for (long long i = 1; i <= n; i++)
	{
		if (i == 1)
			cout << 0 << "\n";
		else if (i == 2)
			cout << 6 << "\n";
		else if (i == 3)
			cout << 28 << "\n";
		else if (i == 4)
			cout << 96 << "\n";
		else
		{
			cout << ( SQ(i) * (SQ(i) - 1LL) / 2LL ) - ( ((SQ(i) * 8LL) - (24LL * i - 16LL)) / 2LL ) << "\n";
		}
	}

	return 0;
}