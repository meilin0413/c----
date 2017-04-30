#include<iostream>
#include<string>
#include<fstream>
#include"file_open.h"
using namespace std;

int main()
{
	/*ofstream save_file("io.txt",ios::ate);
	save_file<< "good bye" << endl;
	save_file<< 123 << endl;
	save_file.close();
	//save_file("io.txt", ios::ate);
	ifstream open_file("io.txt");
	char ch;
	while (!open_file.eof())
	{
	    open_file.get(ch);
		cout << ch;
	}
	open_file.close();
	open_file.open("io.txt");//另一种打开方式
	file_open(open_file);
	open_file.close();
	//istream read;*/

	//刷新缓冲区
	cout << "hi" << endl;
	cout << "hi" << ends;
	cout << "hi" << flush;
	cout << unitbuf << "1   " << "222   " << nounitbuf;


	system("pause");
	return 0;
}