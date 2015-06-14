#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		int grade;
		cin >> grade;
		if (grade >= 90)
			cout << "A" << endl;
		else if (grade>=80)
			cout << "B" << endl;
		else if (grade >= 70)
			cout << "C" << endl;
		else if (grade >= 60)
			cout << "D" << endl;
		else
		{
			cout << "E" << endl;
		}
		n--;
	}
}