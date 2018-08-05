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
	if (n % 4 == 1 || n % 4 == 2)
	{
		cout << "NO";
	}
	else if (n % 4 == 0)
	{
		cout << "YES\n" ;
		cout << n / 2 << "\n";
		for (int i = 1 ; i <= n / 2 ; i = i + 2) cout << i << " " ;
		for (int i = n / 2 + 2 ; i <= n ; i = i + 2) cout << i << " " ;
		cout << "\n";
		cout << n / 2 << "\n";
		for (int i = 2 ; i <= n / 2 ; i = i + 2) cout << i << " " ;
		for (int i = n / 2 + 1 ; i <= n ; i = i + 2) cout << i << " " ;
		cout << "\n";
	}
	else
	{
		cout << "YES\n" ;
		if ((n+1) % 8 == 0)
		{
			cout << (n + 1) / 2 << "\n";
			for (int i = 1 ; i < (n + 1)/4 ; i = i + 2) cout << i << " " ;
			cout << (n+1)/4 << " ";
			for (int i = (n+1)/4 + 1 ; i < (n + 1)/2 - 1 ; i = i + 2) cout << i << " " ;
			cout << (n+1)/2 << " ";
			for (int i = (n+1)/2 + 3 ; i <= n ; i = i + 2) cout << i << " " ;
			cout << "\n";
			cout << (n-1)/2 << "\n";
			for (int i = 2 ; i < (n + 1)/4 ; i = i + 2) cout << i << " " ;
			for (int i = (n + 1)/4 + 2 ; i < (n - 1)/2 ; i = i + 2) cout << i << " " ;
			cout << (n - 1)/2 << " " << (n - 1)/2 + 2 << " ";
			for (int i = (n + 1)/2 + 2 ; i <= n ; i = i + 2) cout << i << " " ;
			cout << "\n";
		}
		else
		{
			cout << (n-1)/2 << "\n";
			for (int i = 1 ; i < (n+1)/4 ; i = i + 2) cout << i << " " ;
			for (int i = (n+1)/4 + 2 ; i <= n ; i = i + 2) cout << i << " " ;
			cout << "\n";
			cout << (n+1)/2 << "\n";
			for (int i = 2 ; i < (n+1)/4 ; i = i + 2) cout << i << " " ;
			cout << (n+1)/4 << " ";
			for (int i = (n+1)/4 + 1 ; i <= n ; i = i + 2) cout << i << " " ;
			cout << "\n";
		}
	}

	return 0;
}