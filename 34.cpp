#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int answer = 0;
	cin >> a >> b >> c;
	for (int i = c+7; i < 101; i+=7)
	{
		if (i % 5 == b&&i % 3 == a)
		{
			answer = 1;
			cout << i << endl;
			break;
		}
	}
	if (answer == 0)
	{
		cout << "No answer" << endl;
	}
	return 0;
}