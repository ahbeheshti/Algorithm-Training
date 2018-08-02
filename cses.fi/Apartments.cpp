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
	InputI(k);
	InputAI(a , n);
	InputAI(b, m);
	sort(a , a+n);
	sort(b, b+m);
	int aP = 0;
	int bP = 0;
	int num = 0;
	while(aP < n && bP < m) {
		if (b[bP] < a[aP] - k)
		{
			bP++;
		}
		else if (b[bP] <= a[aP] + k )
		{
			aP++;
			bP++;
			num++;
		} 
		else
		{
			aP++;
		}
	}
	cout << num;
	return 0;
}