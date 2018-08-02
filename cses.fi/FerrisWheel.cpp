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
	InputI(x);
	InputAI(p , n);
	sort(p , p + n);
	int a = 0;
	int b = n - 1;
	int count = 0;
	while(a < b) {
		if (p[a] + p[b] <= x)
		{
			a++;
			b--;
			count++;
		}
		else
		{
			b--;
			count++;
		}
	}
	if (a == b)
		count++;

	cout << count;

	return 0;
}