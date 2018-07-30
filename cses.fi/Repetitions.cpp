#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (unsigned int i = a; i <= b; i++)
#define Loop(i,n) for (unsigned int i = 0; i < n; i++)
#define SQ(a) (a)*(a)

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int best = 1 , num = 0;
	char c = 'B';
	string x;
	cin >> x;

	Loop(i , x.length())
	{
		if (x[i] == c){
			num++;
			best = max(num , best);
		}
		else{
			num = 1;
			c = x[i];
		}
		
	}

	cout << best;

	return 0;
}