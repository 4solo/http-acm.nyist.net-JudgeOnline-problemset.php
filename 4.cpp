#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char a, b, c;
	while (n != 0)
	{
		cin >> a >> b >> c;
		if (a >= b)
		{
			if ( b>= c)
					cout << c << " "<<b << " "<<a << endl;
			else
			{
				if (a >= c)
					cout << b << " " << c << " " << a << endl;
				else
					cout << b << " " << a << " " << c << endl;

			}
		}
		else
		{
			if (a >= c)
				cout << c << " " << a << " " << b << endl;
			else
			{
				if (c >= b)
					cout << a << " " << b << " " << c << endl;
				else
					cout << a << " " << c << " " << b << endl;
			}
		}
		n--;
	}
	return 0;
}