#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int length;
	vector<int> h;
	h.push_back(1);
	h.push_back(1);
	while (n!=0)
	{
		cin >> length;
		int size;
		while (h.size() < length)
		{
			size = h.size();
			h.push_back(h[size - 1] + h[size - 2]);
		}
		if (h.size()>=length)
			cout << h[length - 1] << endl;
		n--;
	}
	return 0;
}