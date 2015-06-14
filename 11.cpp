#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int number;
	while (n != 0)
	{
		cin >> number;
		for (int i = 1; i <= number; i += 2)
		{
			cout << i << " ";
		}
		cout << endl;
		for (int j = 2; j <= number; j += 2)
		{
			cout << j << " ";
		}
		cout << endl;
		n--;
	}
}