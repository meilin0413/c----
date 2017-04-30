#include<iostream>
#include<vector>
#include<string>
using namespace std;

//size_type的用法
void sizetype(string s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
}

//vector的用法,优点是可以高效的动态添加元素
void vector_use()
{
	vector<int> vec1;
	vector<string> vec2(5, "h");
	vector<string> vec3(vec2);
	vector<int> vec4(5);//注意不能用别的类型的来初始化，类型必须相同
	if (vec1.empty())
		cout << "vecl1 is empty." << endl;
	cout << vec2.size();
	for (int i = 0; i < 10; i++)
		vec1.push_back(i);
	string word;
	while (cin>>word)//control+z 结束输入
		vec3.push_back(word);
	for (vector<string>::size_type i = 0; i < vec3.size(); i++)
		cout << vec3[i];
	cout << endl;



}

//输入函数，并且返回一个对象，下标访问
vector<int> input_int(vector<int> &array)
{
	int temp;
	while (cin >> temp)
	{
		array.push_back(temp);
	}
	
	return array;
}

//输入函数，迭代器访问
vector<int> input_int_ite(vector<int> &array)
{
	vector<int>::iterator ite=array.begin();
	*ite = 0;//使用解引用方式来访问迭代器所指向的元素

	return array;
}

//输出函数
void output_int(vector<int> array)
{
	vector<int>::size_type length=array.size();
	for (vector<int>::size_type i = 0; i < length; i++)
		cout << array[i]<<" ";
}

void output_int_ite(vector<int> array)
{
	//利用迭代器来进行访问
	for (vector<int>::iterator ite = array.begin(); ite != array.end(); ite++)
	{
		cout << *ite << " ";
	}
	cout << endl;
	//利用const-iterator来进行访问,不能改变迭代器所指向的元素的值
	for (vector<int>::const_iterator ite = array.begin(); ite != array.end(); ite++)
	{
		cout << *ite << "  ";
	}
}

//给出一个序列第一个和第二个相加之后得到的序列
vector<int> sum1(vector<int> array)
{
	vector<int> sum;
	vector<int>::size_type length=array.size();
	if (length % 2 == 1)
	{
		cout << "The input sequence's length is odd, so the last number do not add." << endl;
		for (vector<int>::size_type i = 0; i < length - 1; i++)
		{
			sum.push_back(array[i] + array[i + 1]);
			i++;
		}
		sum.push_back(array[length - 1]);
		
	}
	else
	{
		for (vector<int>::size_type i = 0; i < length; i++)
		{
			sum.push_back(array[i] + array[i + 1]);
			i++;
		}
	}
	return sum;
	
}

//返回给定的序列首位相加得到的序列
vector<int>sum2(vector<int> array)
{
	vector<int> sum2;
	vector<int>::size_type length = array.size();
	if (length % 2 == 0)
	{
		for (vector<int>::size_type i = 0; i < (length/2); i++)
			sum2.push_back(array[i] + array[length - 1 - i]);
	}
	else
	{
		for (vector<int>::size_type i = 0; i < (length/2); i++)
			sum2.push_back(array[i] + array[length - 1 - i]);
		sum2.push_back(array[length / 2]);
		cout << "the input numbers's number is odd" << endl;
	}
	return sum2;
}

//test
int main()
{
	string s = "hello , Lily.";
	//sizetype(s);
	//vector_use();
	vector<int> array;
	input_int(array);
	vector<int> sum1(sum1(array));
	output_int(array);
	cout << endl;
	output_int(sum1);
	cout << endl;
	vector<int> sum2(sum2(array));
	output_int(array);
	cout << endl;
	output_int(sum2);
	system("pause");
	return 0;

}