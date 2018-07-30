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
#define SQ(a) (a)*(a)

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin >> n;
	while(n != 1) {
		cout << n << " ";
		n = (n%2LL == 0)? n/2LL : n * 3LL + 1LL;
	}
	cout << 1;

	return 0;
}