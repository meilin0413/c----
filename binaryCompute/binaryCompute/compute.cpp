#include "compute.h"

string add(string a, string b)
{
	int sizeA, sizeB;
	sizeA = sizeof(a);
	sizeB = sizeof(b);
	int num,num2;
	int flag=0;
	num = (sizeA > sizeB) ? sizeB : sizeA;
	num2 = ((sizeA - num) > 0) ? (sizeA - num) : (sizeB - num);
	string add;
	string add1(num,0);
	string add2(num2,0);
	string add3(1, 0);
	for (int i = 0; i < num; i++)
	{
		if (a[sizeA - i - 1] + b[sizeB - i - 1] + flag >= 98)
		{
			add1[num - i - 1] = (a[sizeA - i - 1] + b[sizeB - i - 1] + flag)%98;//怎样将数字转化成字符
			flag = 1;
		}
		else
		{
			add1[num - i - 1] = (a[sizeA - i - 1] + b[sizeB - i - 1] + flag)%96;
			flag = 0;
		}
	}
	if (sizeA > sizeB)
	{
			for (int i = 0; i < num2; i++)
			{
				if (a[num2 - i - 1] + flag == 98)
				{
					add2[num2 - i - 1] = 0;
					flag = 1;
				}
				else
				{
					add2[num - i - 1] =( a[sizeA - i - 1] + flag)%96;
					flag = 0;
				}
			}
	}
	else
	{
		for (int i = 0; i < num2; i++)
		{
			if (b[num2 - i - 1] + flag == 98)
			{
				add2[num2 - i - 1] = 0;
				flag = 1;
			}
			else
			{
				add2[num - i - 1] = (b[sizeA - i - 1] + flag)%96;
				flag = 0;
			}
		}
	}
	if (flag == 1)
		add3[0] = 1;
	add = add3 + add2 + add1;
	return add;
}

string substraction(string a, string b)
{
	return 0;
}

