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
	long long x,y,start,end,m;
	long long output[n];
	Loop(i , n){
		cin >> y >> x;
		m = max(x,y);
		start = SQ(m-1) + 1;
		end = SQ(m);
		if (m % 2 == 1)
		{
			if (y > x)
			{
				output[i] = start + (x - 1LL);
			}
			else
			{
				output[i] = end - (y - 1LL);
			}
		}
		else
		{
			if (y > x)
			{
				output[i] = end - (x - 1LL);
			}
			else
			{
				output[i] = start + (y - 1LL);
			}
		}
	}
	Loop(i , n)
		cout << output[i] << "\n";


	return 0;
}