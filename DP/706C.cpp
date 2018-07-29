#include <iostream>
using namespace std;


bool firstBigger(string first , string second){
	int i = 0 ;
	while (i<first.size() && i<second.size() && first[i]==second[i]) i++;\
	if (i>=second.size()) return true;
	if (i>=first.size()) return false;
	if((int)first[i]>(int)second[i]) return true;
	else return false;
}

string reverseString(string input){
	//char inputSeprated [input.lenght]
	string output = "";
	for (int i = input.size()-1; i >= 0; --i)
		output += input[i];
	return output;
}

int main(int argc, char const *argv[])
{
	long long n;
	cin >> n;
	long long cost[n];
	for (long long i = 0; i < n; ++i) 
		cin >> cost[i];
	string input[n];
	for (long long i = 0; i < n; ++i)
		cin >> input[i];
	long long dp[n][2];
	dp[0][0]=0;
	dp[0][1]=cost[0];
	for (long long i = 1; i < n; ++i)
	{
		for (long long k = 0; k < 2; ++k)
		{
			long long min =-1;
			string now ;
			if (k == 0) now = input[i];
			else now = reverseString (input[i]);
			for (long long j = 0; j < 2; ++j) {
				string before;
				if (j == 0) before = input[i-1];
				else before = reverseString (input[i-1]);
				if (dp[i-1][j]!= -1 && firstBigger(now,before)) {
					if(min==-1) min = dp[i-1][j];
					else if(min > dp[i-1][j]) min = dp[i-1][j];
				}
			}
			dp[i][k] = min;
		}
		if(dp[i][1]!=-1) dp[i][1]+= cost[i];
	}
	
	long long min =-1;
	if (dp[n-1][0]!=-1) min = dp[n-1][0];
	if (dp[n-1][1]!=-1)
	 {
		if (min==-1)
		{
			min = dp[n-1][1];
		}
		else
		{
			if (min>dp[n-1][1])
			{
				min = dp[n-1][1];
			}
		}
	}
	cout << min; 

	return 0;
}