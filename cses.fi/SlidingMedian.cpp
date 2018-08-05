#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

template <typename T> using indexed_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; 

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

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputI(n);
	InputI(k);
	InputAI(a, n);
	indexed_set<pair<int , int>> s;

	Loop(i , k) s.insert({a[i] , i});
	cout << (*(s.find_by_order((k-1)/2))).F << " ";

	for (int i = k; i < n; ++i)
	{
		s.erase({a[i-k] , i-k});
		s.insert({a[i] , i});
		cout << (*(s.find_by_order((k-1)/2))).F << " ";
	}

	return 0;
}