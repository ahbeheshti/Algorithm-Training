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

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n , num;
	cin >> n;
	int x[n+1] = {0};

	Loop(i , n-1)
	{
		cin >> num;
		x[num] = 1;
	}
	REP(i , 1 , n)
	{
		if (x[i] == 0)
		{
			cout << i;
			return 0;
		}
	}

	return 0;
}