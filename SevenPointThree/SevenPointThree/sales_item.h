#include<string>
using namespace std;

class sales_item{
private:
	string isbn;
	int units_sold;//销售册数
	double revenue;//总销售收入
	//static double avarage;
public:
	sales_item() :units_sold(0), revenue(0.0){}//构造函数
	double avg_price() const;
	bool same_isbn(const sales_item &rhs) const
	{
		return isbn == rhs.isbn;
	}
	void input();
	void output();
};