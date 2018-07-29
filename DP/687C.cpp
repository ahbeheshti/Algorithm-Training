#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int M[520][520];
int main(int argc, char const *argv[])
{
	int n,k;
	scanf("%d%d", &n, &k);
	int c [n];
	for(int i=0; i<n; i++){
		scanf("%d", &c[i]);
	}
	sort(c,c+n);
	M[0][0]=1;
	for (int i = 0; i < n && c[i]<=k; ++i)
	{
		for (int j = k-c[i]; j > -1; --j)
		{
			for (int l = j; l > -1; --l)
			{
				if (M[l][j]==1)
				{
					//M[c[i]][j+c[i]] = 1;
					M[l][j+c[i]] = 1;
					if (l+c[i] < 510) M[l+c[i]][j+c[i]] = 1;
				}
			}
		}
	}
	int counter = 0;
	for (int i = 0; i < k+1; ++i) if (M[i][k]) counter++;
	printf("%d\n",counter );
	for (int i = 0; i < k+1; ++i) if (M[i][k]) printf("%d ", i);
	return 0;
}