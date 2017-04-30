#include<iostream>
#include<vector>
#include<string>
using namespace std;

//size_type���÷�
void sizetype(string s)
{
	for (string::size_type i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
}

//vector���÷�,�ŵ��ǿ��Ը�Ч�Ķ�̬���Ԫ��
void vector_use()
{
	vector<int> vec1;
	vector<string> vec2(5, "h");
	vector<string> vec3(vec2);
	vector<int> vec4(5);//ע�ⲻ���ñ�����͵�����ʼ�������ͱ�����ͬ
	if (vec1.empty())
		cout << "vecl1 is empty." << endl;
	cout << vec2.size();
	for (int i = 0; i < 10; i++)
		vec1.push_back(i);
	string word;
	while (cin>>word)//control+z ��������
		vec3.push_back(word);
	for (vector<string>::size_type i = 0; i < vec3.size(); i++)
		cout << vec3[i];
	cout << endl;



}

//���뺯�������ҷ���һ�������±����
vector<int> input_int(vector<int> &array)
{
	int temp;
	while (cin >> temp)
	{
		array.push_back(temp);
	}
	
	return array;
}

//���뺯��������������
vector<int> input_int_ite(vector<int> &array)
{
	vector<int>::iterator ite=array.begin();
	*ite = 0;//ʹ�ý����÷�ʽ�����ʵ�������ָ���Ԫ��

	return array;
}

//�������
void output_int(vector<int> array)
{
	vector<int>::size_type length=array.size();
	for (vector<int>::size_type i = 0; i < length; i++)
		cout << array[i]<<" ";
}

void output_int_ite(vector<int> array)
{
	//���õ����������з���
	for (vector<int>::iterator ite = array.begin(); ite != array.end(); ite++)
	{
		cout << *ite << " ";
	}
	cout << endl;
	//����const-iterator�����з���,���ܸı��������ָ���Ԫ�ص�ֵ
	for (vector<int>::const_iterator ite = array.begin(); ite != array.end(); ite++)
	{
		cout << *ite << "  ";
	}
}

//����һ�����е�һ���͵ڶ������֮��õ�������
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

//���ظ�����������λ��ӵõ�������
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