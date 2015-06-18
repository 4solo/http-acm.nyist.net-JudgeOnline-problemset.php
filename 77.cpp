#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int *arr;
	arr = new int[n+1];
	arr[0] = 2; //dont use [0];
	//0 mean off 1 mean on
	for (int i = 1; i < n + 1; i++)
	{
		arr[i] = 0;
	}
	for (int i = 1; i < k+1; i++)
	{
		for (int j = i; j < n + 1; j += i)
		{
			if (arr[j] == 0)
			{
				arr[j] = 1;
			}
			else
			{
				arr[j] = 0;
			}
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		if (arr[i] == 1)
			cout << i << " ";
	}

	return 0;
}