#include<iostream>
using namespace std;

//typedef 定义类型的同义词,目的是隐藏特定类型，强调使用类型的目的，简化复杂的类型定义
void typeExam()
{
	typedef double wage;
	typedef wage salary;
	wage hourly, weekly;

}
void enumExam()
{
	enum open_modes{input,output,append};
	//enum close_modes{input=1,output,append};
	//close_modes input1;
	cout << input << endl;
}
int main()
{
	enum open_modes{ input, output, append };
	//enum close_modes{ input = 1, output, append };
    open_modes input1=input;
	cout << input << endl;
	
	system("pause");
	return 0;
}