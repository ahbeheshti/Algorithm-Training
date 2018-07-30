#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int cash[] = {100 , 20 , 10 , 5 , 1};
	int num = 0;
	for (int i = 0; i < 5; ++i)
	{
		num += n / cash[i];
		n = n % cash[i];
	}
	cout << num;
	return 0;
}