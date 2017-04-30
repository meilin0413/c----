#include"function_state.h"
#include<iostream>
#include<vector>
using namespace std;

double power(double base, int pow)
{
	double sum = base;
	for (int i = 1; i < pow; i++)
	{
		sum = sum*base;
	}
	return sum;
}

double Ab_value(double val)
{
	if (val < 0)
	{
		val = -val;
	}
	return val;

}

void reset(int *p)
{
	*p = 5;
	p = 0;//only change the local value

}

int max(int a, int *b)
{
	if (a > *b)
		return a;
	else
		return *b;

}

//这两个swap都可以改变实参的值
void swap(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;


}

//引用只是实参的另一个名字而已，所以当在这个函数里面的值变了之后，实参的值也改变了
void swap(int &val1, int &val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

vector<int>::const_iterator find_val(vector<int>::const_iterator beg, vector<int>::const_iterator end, int val, vector<int>::size_type &occurs)
{
	vector<int>::const_iterator res_iter = end;
	occurs = 0;
	for (; beg != end; beg++)
	{
		if (*beg == val)
		{
			if (res_iter == end)
				res_iter = beg;
			occurs++;
		}
	}
	return res_iter;
}

//输入vector容器类型的函数，但是不高效
void input_vector(vector<int> &array)
{
	int temp;
	while (cin >> temp)
	{
		array.push_back(temp);
	}
	//return array;
}

//使用迭代器来对vector进行操作，更高效
void output_vector(vector<int>::iterator beg, vector<int>::iterator end)
{
	while (beg != end)
	{
		cout << *beg++ << " ";
	}
}

void output(vector<int> array)
{
	vector<int>::const_iterator ite = array.begin();
	for (; ite != array.end(); ite++)
	{
		cout << *ite << "  ";

		cout << endl;
	}

}

//测试右值是否可以作为实参去调用函数
int test(int &val)
{
	return ++val;
}

//数组形参的定义
void print_array(int *p, int length)
{
	for (int i = 0; i < length; i++)
		cout << *p++ << " ";
}

int* add(int *p, int length)
{
	for (int i = 0; i < length; i++)
	{
		*p = *p + 3;
		*(p++);
	}
	*(p - length + 1);
	return p;
}