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
	if (n == 1)
	{
		cout << 1;
	}
	else if (n < 4)
	{
		cout << "NO SOLUTION";
	}
	else
	{
		for (int i = 2; i <= n; i = i+2)
			cout << i << " ";
		for (int i = 1; i <= n; i = i+2)
			cout << i << " ";
	}


	return 0;
}