#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		int n1, m;
		cin >> n1 >> m;
		if (2 * n1 > m || m % 2 == 1)
		{
			cout << "No answer" << endl;
		}
		else
		{
			cout << n1 - (m - 2 * n1) / 2 << " " << (m - 2 * n1) / 2<<endl;
		}
		n--;
	}
	return 0;
}