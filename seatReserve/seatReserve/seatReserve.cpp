#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int MAX_SEATS = 10;
	enum SeatStatus { OCCUPIED, UNOCCUPIED };
	typedef SeatStatus SeatList[MAX_SEATS];
	SeatList seat;
	string ans;
	//for (int i = 0; i < MAX_SEATS; i++)
	//{
	//	cout << seat[i] << endl;
	//}
	//cout << UNOCCUPIED << endl;
	/*for (int i = 0; i < MAX_SEATS; i++)
	{
		if (seat[i] = UNOCCUPIED)
		{
			cout << "Do you wish to assign seat " << i + 1 << " ?" << endl;
			cin >> ans;
			if (ans == "y")
			{
				seat[i] = OCCUPIED;
				break;
			}
		}

		else
		{
			cout << i + 1 << endl;
		}
	}*/
	/*char name[5] = { 'j','o','h','n' };
	char name2[] = "john";
	cout << name;//直接输出整个数组
	int a[] = { 1,2,3,4 };
	int b[] = { 5,6,7 };
	int c[] = { 3,6 };
	cout << c[0];*/
	/*for (int i = 0; name[i] !='\0'; i++)
	{
		cout << name[i] << "  " << name2[i] << endl;

	}*/

	struct date {
		string month;
		int day;
		int year;
	};
	date holiday[3] = { "june",4,2016,"a",3,2015,"c",3,2014 };
	cout << holiday[1].month << endl;
	date today = {"june",4,2016};
	cout << today.month;

	system("pause");
	return 0;
}