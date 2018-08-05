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
	InputAI(r , m);
	int aux[n];
	aux[0] = h[0];
	REP(i , 1 , n-1)
		aux[i] = max(aux[i - 1] , h[i]);

	Loop(i , m)
	{
		int k = lower_bound(aux , aux+n , r[i]) - aux;
		if (k == n)
			cout << 0 << " ";
		else
			cout << k + 1 << " ";
		h[k] = h[k] - r[i];
		if (k == 0)
		{
			aux[k] = h[k];
			k++;
		}
		for (int j = k; j < m; ++j)
		{
			int hh = max(aux[j - 1] , h[j]);
			if (hh == aux[j])
				break;
			aux[j] = hh;
		}
	}

	return 0;
}