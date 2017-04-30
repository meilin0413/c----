#include "sort.h"
vector<int> insertSort(vector<int>& a)
{
	int length = a.size();
	int key;
	int j;
	for (int i = 1; i < length; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;

	}
	return a;
}
/*vector<int> insertSortRecur(vector<int> &a, int n)
{
insertSortRecur(a, n-1);
int key = a[n-1];
int i = n - 2;
while (i >= 0 && key < a[i])
{
a[i + 1] = a[i];
i--;
}
a[i + 1] = key;
return a;
}*/
vector<int> merge(vector<int> &a, int p, int q, int r)//从p到q的和q+1到r已经排好序乐
{
	int n1 = q - p + 1;
	int n2 = r - q;
	vector<int> a1(n1 + 1);
	vector<int> a2(n2 + 1);
	for (size_t i = 0; i < n1; i++)
	{
		a1[i] = a[p + i];
	}
	for (rsize_t j = 0; j < n2; j++)
	{
		a2[j] = a[q + 1 + j];
	}
	a1[n1] = 100000000;//这样可以只用一个for就能实现下面的合并
	a1[n2] = 100000000;
	int i = 0;
	int j = 0;
	for (size_t k = p; k < r + 1; k++)
	{
		if (a1[i] < a2[j])
		{
			a[k] = a1[i];
			i++;
		}
		else
		{
			a[k] = a2[j];
			j++;

		}
	}
	return a;
}
//在下面这个方法中没有设置最后一位，是分情况讨论的
vector<double> merge(vector<double> &a, int p, int q, int r)//从p到q的和q+1到r已经排好序乐
{
	int n1 = q - p + 1;
	int n2 = r - q;
	vector<double> a1(n1);
	vector<double> a2(n2);
	for (int i = 0; i < n1; i++)
	{
		a1[i] = a[p + i];
	}
	for (int j = 0; j < n2; j++)
	{
		a2[j] = a[q + 1 + j];
	}
	int i = 0;
	int j = 0;
	int k = p;
	while (i < n1&&j < n2)
	{
		if (a1[i] < a2[j])
		{
			a[k] = a1[i];
			i++;
		}
		else
		{
			a[k] = a2[j];
			j++;

		}
		k++;
	}
	if (i < n1)
	{
		while (i < n1)
		{
			a[k] = a1[i];
			i++;
		}
	}
	if (j < n2)
	{
		while (i < n2)
		{
			a[k] = a2[i];
			i++;
		}
	}
	return a;
}
vector<int> mergeSort(vector<int>&a, int p, int r)
{
	int q = 0;
	if (p < r)
	{
		q = (p + r) / 2;
		mergeSort(a, p, q);
		mergeSort(a, q + 1, r);
		merge(a, p, q, r);
	}
	return a;
}
vector<int> bubbleSort(vector<int>&a)
{
	int length = a.size();
	int temp;
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j>i; j--)
		{
			if (a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	return a;
}
int left(int i)
{
	return 2 * i;
}
int right(int i)
{
	return 2 * i + 1;
}
void exchange(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void max_heapify(vector<int> &a, int i, int length)//对i进行调整，得到一个最大堆
{
	
	if (i >= a.size() / 2)
		return;
	int l = left(i);
	int r = right(i);
	int largest = 0;
	if (l < length && a[l]>a[i])
	{
		largest = l;
	}
	else
		largest = i;
	if (r<length&&a[r]>=a[largest])
		largest = r;
	if (largest != i)
	{
		exchange(a[largest], a[i]);
		i = largest;
		max_heapify(a, i,a.size());
		
	}
	
}
void build_max_heapify(vector<int>& a)//建立一个最大堆
{
	for (int i = a.size() / 2-1; i >= 0; i--)
	{
		max_heapify(a, i,a.size());
	}
}
void heapSort(vector<int> &a)
{
	build_max_heapify(a);
	int length = a.size();
	for (int i = a.size() - 1; i >= 0; i--)
	{
		exchange(a[0], a[i]);
		length--;
		max_heapify(a, 0, length);
	}
}
int partition(vector<int> &a, int p, int r)
{
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (a[j] <= x)
		{
			i++;
			exchange(a[i], a[j]);
		}
		exchange(a[i + 1], a[r]);
	}
	cout << i + 1 << ";;;" << endl;
	return i + 1;
}
void quickSort(vector<int> &a, int p, int r)
{
	int q;
	if (p < r)	
	{
		q = partition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
	else
		return;
	
}
