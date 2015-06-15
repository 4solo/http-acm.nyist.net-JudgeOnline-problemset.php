#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	int count = 1;
	int change = 0;
	while (a.size()!=0)
	{
		if (a[1] == '#')
		{
			a[1] = 'b';
			change = 1;
			if (a[0] == 'A' || a[0] == 'C' || a[0] == 'D' || a[0] == 'F')
				a[0] = a[0] + 1;
			else
				a[0] = 'A';
		}
		else if (a[1] == 'b')
		{
			if (a[0] == 'B' || a[0] == 'D' || a[0] == 'E' || a[0] == 'G')
				a[0] = a[0] - 1;
			else
				a[0] = 'G';
			a[1] = '#';
			change = 1;
		}
		if (change)
		{
			cout << "Case " << count << ": " << a << endl;
			change = 0;
		}
		else
		{
			cout << "Case " << count << ": " << "UNIQUE" << endl;
		}
		getline(cin, a);
		count++;
	}
	return 0;
}