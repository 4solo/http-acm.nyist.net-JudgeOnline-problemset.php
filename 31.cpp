#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for (int i = 0; i < 5;i++)
		cin >> arr[i];
	int min=arr[0], max=arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << " " << max << endl;
	return 0;
}