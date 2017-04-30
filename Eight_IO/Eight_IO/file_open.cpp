#include"file_open.h"
#include<iostream>

void file_open(ifstream &open){
	char ch;
	while (!open.eof())
	{
		open.get(ch);
		cout << ch;
	}
	cout << "--------------" << endl;

}
istream& read_io(istream &read){
	char ch;
	//ostream out;
	while (read >> ch, !read.eof())	{
		cout << ch;
	}
	return read;
}