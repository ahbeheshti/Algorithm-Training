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

int getNum(char c)
{
	if (c == 'A')
		return 0;
	else if (c == 'C')
		return 1;
	else if (c == 'G')
		return 2;
	else
		return 3;
}

string getChar(int n)
{
	if (n == 0)
		return "A";
	else if (n == 1)
		return "C";
	else if (n == 2)
		return "G";
	else
		return "T";
}

string getMin(string a , string b){
	if (a.size() < b.size())
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	InputS(s);
	ll n = s.size();
	ll last[4] = {-1 , -1 , -1 , -1} ;
	pair<int, int> current[4];
	pair<int, int> bests[n]; 

	Loop (i, n) {
		REP(j , 0 , 3){
			if (last[j] == -1)
				current[j] = {0 , j};
			else
				current[j] = { bests[last[j]].F + 1 , last[j] };
		}
		bests[i] = current[0];
		REP(j , 1 , 3) bests[i] = min(bests[i] , current[j]);
		last[getNum(s[i])] = i;
	}
	int bn = 1000000000;
	int ch = -1;
	Loop(i , 4){
		if (last[i] == -1)
		{
			cout << getChar(i);
			return 0;
		}
		if (bn > bests[last[i]].F)
		{
			bn = bests[last[i]].F;
			ch = i;
		}
	}
	string result = "";
	int index = last[ch];
	while (bests[index].F != 0){
		result = s[index] + result;
		index = bests[index].S;
	}
	result = getChar(bests[index].S) + s[index] + result;
	cout << result;
	
	return 0;
}