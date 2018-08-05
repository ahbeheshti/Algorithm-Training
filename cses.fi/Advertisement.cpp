#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define Loop(i,n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a)
#define InputI(a) int a; cin >> a; 
#define InputLL(a) long long a; cin >> a;
#define InputS(a) string a; cin >> a;
#define InputAI(a , n) int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputALL(a , n) long long a[n]; for (int i = 0; i < n; ++i) cin >> a[i];
#define InputS(a) string a; cin >> a;

void func(int n , int *a , int *left){
	vector<pair<int,int>> s1;
	for (int i = 0; i < n; ++i)
	{
		auto it = LB(s1.begin() ,s1.end() , MP(a[i] , -1));
		if (it == s1.end())
			left[i] = 0;
		else if (it == s1.begin())
			left[i] = i;
		else
			left[i] = i - 1 - (*(--it)).S;
		int del = s1.size() - (UB(s1.begin() , s1.end() , MP(a[i] , n)) - s1.begin());
		for (auto i = 0; i < del; ++i)
			s1.pop_back();
		s1.push_back({a[i] , i});		
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	InputAI(a , n);
	int * left = (int *)malloc(n * sizeof(int));
	int * right = (int *)malloc(n * sizeof(int));

	func(n , a , left);
	reverse(a , a+n);
	func(n , a , right);
	reverse(a , a+n);
	reverse(right , right+n);

	ll best = 0;

	Loop(i , n)
		best = max (best , ((ll)left[i] + (ll)right[i] + 1LL) * (ll)a[i]);

	cout << best;

	return 0;
}