#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,k;
	scanf("%d%d%d", &n, &m, &k);
	int litr [n][m];
	int rang[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &rang[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d", &litr[i][j]);
		}
	}
	long long nmk [n][k][m];
	for (int i = 0; i < n; ++i)
	{
		bool ranged = false;
		if (rang[i]!=0) ranged = true;

		for (int j = 0; j < k; ++j)
		{
			int inputvalue = -2;
			if (j>i) inputvalue = -1;
			for (int akhar = 0; akhar < m; ++akhar)
			{
				if(inputvalue==-2)
				{
					if (!ranged)
					{
						nmk[i][j][akhar] = inputvalue;
					}
					else
					{
						if (akhar != rang[i]-1)
						{
							nmk[i][j][akhar] = -1;
						}
						else
						{
							nmk[i][j][akhar] = -2;	
						}
					}
				}
				else
				{
					nmk[i][j][akhar] = inputvalue;
				}
			}
		}
	}

	for (int i = 0; i < m; ++i)
	{
		if (nmk[0][0][i]==-2)
		{
			if (rang[0]==0)
			{
				nmk[0][0][i] = litr [0][i];
			}
			else
			{
				nmk[0][0][i] = 0;	
			}
		}
	}

	for (int j = 0; j < k; ++j)
	{
		for (int i = 1; i < n; ++i)
		{
			for(int c = 0; c < m; c++)
			{
				if(nmk[i][j][c]==-2){
					long long min = 100000000000;
					for(int l = 0; l < m; l++)
					{
						if(j > 0){
							if(nmk[i-1][j-1][l] != -1 && l != c && nmk[i-1][j-1][l] < min){
								min = nmk[i-1][j-1][l];
							}
						}
					}
					if(nmk[i-1][j][c] != -1 && nmk[i-1][j][c] < min ){
						min = nmk[i-1][j][c];
					}
					if(min == 100000000000){
						nmk[i][j][c] = -1;
					}
					else {
						nmk[i][j][c] = min ;
						if (rang[i]==0)
						{
							nmk[i][j][c] += litr[i][c];
						}
					}
				}

			}
		}
	}

	long long min = 100000000000;
	for (int i = 0; i < m; ++i)
	{
		if(min > nmk[n-1][k-1][i] && nmk[n-1][k-1][i]!=-1 ) min = nmk[n-1][k-1][i]; 
	}
	if (min == 100000000000)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%I64d", min);
	}

	// cout << endl;
	// cout << endl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < k; ++j)
	// 	{
	// 		for (int akhar = 0; akhar < m; ++akhar)
	// 		{
	// 			cout << nmk[i][j][akhar];
	// 		}
	// 		cout << endl;
	// 	}
	// }
	return 0;
}