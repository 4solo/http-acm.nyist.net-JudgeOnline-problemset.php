#include<iostream>
#include<cstdlib>
using namespace std;
bool is(int h)
{
	if (h == 1)
	{
		return false;
	}
	if (h == 2 || h == 3)
	{
		return true;
	}
	if (h % 2 == 0 || h % 3 == 0)
	{
		return false;
	}
	for (int i = 5; i*i <= h; i += 6)
	{
		if (h%i == 0 || h % (i + 2) == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		int number;
		int total = 0;
		int *a;
		cin >> number;
		a = new int[number];
		for (int i = 0; i < number; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < number; i++)
		{
			if (is(a[i]))
				total = total + a[i];
		}
		cout << total << endl;
		free(a);
		n--;
	}
	return 0;
}