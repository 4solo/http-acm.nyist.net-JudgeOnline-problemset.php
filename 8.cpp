#include<iostream>
#include<cstdlib>
using namespace std;
struct MyStruct
{
	int number;
	int length;
	int width;
}; 
int Compare(const void *a, const void *b)
{
	MyStruct *A;
	MyStruct *B;
	A = (MyStruct*)a;
	B = (MyStruct*)b;
	if ((*A).number < (*B).number)
		return -1;
	else if ((*A).number == (*B).number)
	{
		if ((*A).length < (*B).length)
			return -1;
		else if ((*A).length == (*B).length)
		{
			if ((*A).width < (*B).width)
				return -1;
			else if ((*A).width == (*B).width)
				return 0;
			else
				return 1;
		}
		else
			return 1;
	}
	else
		return 1;
};
int main()
{
	int n;
	cin >> n;
	while (n != 0)
	{
		MyStruct *ha;
		int num;
		cin >> num;
		int le, wi;
		ha = new MyStruct[num];
		for (int i = 0; i < num; i++)
		{
			cin >> ha[i].number >> le >> wi;
			if (le>wi)
			{
				ha[i].length = le;
				ha[i].width = wi;
			}
			else
			{
				ha[i].length = wi;
				ha[i].width = le;
			}

		}
		qsort(ha, num, sizeof(MyStruct), Compare);
		for (int i = 0; i < num-1; i++)
		{
			if (ha[i].number != ha[i + 1].number || ha[i].length != ha[i + 1].length || ha[i].width != ha[i + 1].width)
				cout << ha[i].number <<" "<< ha[i].length <<" "<< ha[i].width << endl;
		}
		cout << ha[num-1].number << " " << ha[num-1].length << " " << ha[num-1].width << endl;
		free(ha);
		n--;
	}
	return 0;
}