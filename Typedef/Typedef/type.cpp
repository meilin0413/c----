#include<iostream>
using namespace std;

//typedef �������͵�ͬ���,Ŀ���������ض����ͣ�ǿ��ʹ�����͵�Ŀ�ģ��򻯸��ӵ����Ͷ���
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