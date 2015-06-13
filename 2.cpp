#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char ha;
	string str;
	stack<char> h;
	int length;
	while (n != 0)
	{
		cin >> str;
		length = 0;
		while (length<str.length())
		{
			if (h.empty())
			{
				h.push(str[length]);
			}
			else if (h.top() == '(' && str[length] == ')')
			{
				h.pop();
			}
			else if (h.top() == '['&&str[length] == ']')
			{
				h.pop();
			}
			else
			{
				h.push(str[length]);
			}
			length++;
		}
		if (h.empty())
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
			while (!h.empty())
			{
				h.pop();
			}
		}
		n--;
	}
	return 0;
}