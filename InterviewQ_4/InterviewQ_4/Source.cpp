#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n = 2, i;
	bool isPrime;

	while (n <= 2000)
	{
		isPrime = true;
		i = 2;
		while (i <= n / 2)
		{
			if (n % i == 0) isPrime = false;
			i++;
		}
		if (isPrime) cout << n << " ";
		n++;
	}

	system("pause");
	return 0;
}