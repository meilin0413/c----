#include"sales_item.h"
#include<iostream>
double sales_item:: avg_price() const
{
	return 1;///////////////////////
}
void sales_item::input()
{
	cout << "please input units_sold" << endl;
	cin >> units_sold;
	cout << "please input revenue" << endl;
	cin >> revenue;
	cout << "please input isbn" << endl;
	cin >> isbn;
}

void sales_item::output()
{
	cout << "units_sold is: " << units_sold << "   revenue is : " << revenue << "  isbn is : " << isbn;
}