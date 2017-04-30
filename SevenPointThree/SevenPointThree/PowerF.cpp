#include"function_state.h"
#include"sales_item.h"
#include<iostream>

int main()
{
	/*int a1[10] = { 5, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	add(a1, 10);
	int *b1;
	b1 = add(a1, 10);
	print_array(b1, 10);
	cout << "haha" << endl;*/
	sales_item book;
	book.input();
	book.output();
	system("pause");

	return 0;
}      