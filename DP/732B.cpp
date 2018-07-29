#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , k ;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i) 
		cin >> a[i];
	int sum = 0;
	for (int i = 1; i < n; ++i)
	{
		int first = a[i] + a[i-1];
		int shouldBeAdded = k-first;
		if (shouldBeAdded > 0){
			a[i] += shouldBeAdded ;
			sum +=  shouldBeAdded ;
		}
	}
	cout << sum << endl;
	for (int i = 0; i<n; ++i)
		cout << a[i] << " ";
	return 0;
}