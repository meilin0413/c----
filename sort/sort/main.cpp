//#include<iostream>
//#include<vector>
#include"sort.h"
using namespace std;
int main()
{
	vector<int> a;
	for (int f= 5; f> 0; f--)
	{
		a.push_back(f);
	}
	for (int j = 0; j < 5; j++)
	{
		cout << a[j] << endl;
	}
	//heapSort(a);

	for (int j = 0; j < 5; j++)
	{
		cout << a[j] << endl;
	}
	system("pause");
	return 0;
}