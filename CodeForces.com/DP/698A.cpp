#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int days;
	cin >> days;
	int workofdays [days];
	for (int i = 0; i < days; ++i) cin >> workofdays[i];
	int dptable[days][3];
	for (int i = 0; i < 3; ++i)
	{
		if(workofdays[0]>1) dptable[0][1] =0;
		else dptable[0][1] = -1;
		if(workofdays[0]%2==1) dptable[0][0] =0;
		else dptable[0][0] = -1;
		dptable[0][2] = 1;
	}
	for (int i = 1; i < days; ++i)
	{
		if (workofdays[i]>1)
		{
			dptable[i][1]=dptable[i-1][2];
			if (dptable[i-1][0] < dptable[i][1] && dptable[i-1][0]!=-1) dptable[i][1]= dptable[i-1][0];
		}
		else
		{
			dptable[i][1]=-1;
		}
		if (workofdays[i]%2==1)
		{
			dptable[i][0]=dptable[i-1][2];
			if (dptable[i-1][1] < dptable[i][0] && dptable[i-1][1]!=-1) dptable[i][0]= dptable[i-1][1];
		}
		else
		{
			dptable[i][0]=-1;
		}
		dptable[i][2]=dptable[i-1][2];
		if (dptable[i-1][1] < dptable[i][2] && dptable[i-1][1]!=-1) dptable[i][2]= dptable[i-1][1];
		if (dptable[i-1][0] < dptable[i][2] && dptable[i-1][0]!=-1) dptable[i][2]= dptable[i-1][0];
		dptable[i][2]++;
	}

	// for (int i = 0; i < days; ++i)
	// {
	// 	for (int j = 0; j < 3; ++j)
	// 	{
	// 		cout << dptable[i][j];
	// 	}
	// 	cout << endl;
	// }
	int print=dptable[days-1][2];
	if (dptable[days-1][1] < print && dptable[days-1][1]!=-1) print= dptable[days-1][1];
	if (dptable[days-1][0] < print && dptable[days-1][0]!=-1) print= dptable[days-1][0];
	cout << print;
}