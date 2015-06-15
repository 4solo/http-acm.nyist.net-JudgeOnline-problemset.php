#include<iostream>
using namespace std;
bool is(int n)
{
	if (n <= 3)
		return n > 1;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i*i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}
int result(int n)
{
	int left;
	int right;
	if (n % 2 == 0)
	{
		for (left = n - 1; left > 1; left -= 2)
		{
			if (is(left))
				break;
		}
		for (right = n + 1;; right += 2)
		{
			if (is(right))
				break;
		}
		if (n - left > right - n )
			return right;
		else
			return left;
	}
	else
	{
		for (left = n - 2; left > 1; left -= 2)
		{
			if (is(left))
				break;
		}
		for (right = n + 2;; right += 2)
		{
			if (is(right))
				break;
		}
		if (n - left > right - n)
			return right;
		else
			return left;
	}
}
int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		int number;
		cin >> number;
		if (is(number)&& number!=1)
			cout << number << " " << "0" << endl;
		else if (number!=1)
		{
			int re;
			re = result(number);
			if (re-number>0)
				cout << re << " " << re - number << endl;
			else 
				cout << re << " " << number - re << endl;
		}
		else
		{
			cout << "2" << " " <<"1"<< endl;
		}
		n--;
	}
}