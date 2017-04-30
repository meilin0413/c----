#include<iostream>
#define  MAX 1000
using namespace std;

class room{
private:
	int self_route;
	int self_num;
public:
	room()
	{
		self_route = 0;
		self_num = 0;
	}
	void set_self_route(int i)
	{
		self_route = i;
	}
	void set_self_num(int i)
	{
		self_num = i;
	}
	int get_self_num()
	{
		return self_num;
	}

	int get_self_route()
	{
		return self_route;
	}
};
class struct_room{

private:
	int count1;
	int sum_route;
	room self;
	room neibor[3];
public:
	struct_room()
	{
		count1 = 0;
		sum_route = 0;
	}
	void set_self_route(int i)
	{
		self.set_self_route(i);
	}
	void set_self_num(int i)
	{
		self.set_self_num(i);
	}
	void set_neibor_num(int i)
	{
		if (count1 < 3)
		{
			neibor[count1].set_self_num(i);
			count1++;
		}
		else
			cout << "input error!" << endl;
	}
	void set_sum_route(int i)
	{
		sum_route = i;
	}
	int get_sum_route()
	{
		return sum_route;
	}
	int get_neibor_route(int i)
	{
		return neibor[i].get_self_route();
	}
	int get_nei_num(int i)
	{
		return neibor[i].get_self_num();
	}
	int get_self_num()
	{
		return self.get_self_num();
	}
	int get_self_route()
	{
		return self.get_self_route();
	}
};
void  set_sum(struct_room s[], int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = s[i].get_self_route() + s[s[i].get_nei_num(0)].get_self_route() + s[s[i].get_nei_num(1)].get_self_route() + s[s[i].get_nei_num(2)].get_self_route();
		s[i].set_sum_route(sum);
	}

}
int find(struct_room s[], int n, int m)
{
	int max = 0;
	int sum = 0;
	int temp;
	int temp2 = 0;
	int temp3 = 0;
	for (int i = 0; i < m; i++)
	{
		temp = 0;
		max = 0;
		for (int j = 0; j < n; j++)
		{
			if (s[j + 1].get_sum_route()>max)
			{
				max = s[j + 1].get_sum_route();
				temp = s[j + 1].get_self_num();
			}
		}
		for (int k = 0; k < 3; k++)
		{
			s[s[temp].get_nei_num(k)].set_self_route(0);
		}
		s[temp].set_self_route(0);
		s[temp].set_sum_route(0);
		set_sum(s, n);
		sum = sum + max;
	}
	return sum;
}
int main()
{
	struct_room s[MAX];
	int N = 0, M = 0;
	int temp1, temp2;
	cin >> N >> M;

		int temp;
		for (int i = 1; i <= N; i++)
		{
			cin >> temp;
			s[i].set_self_route(temp);
			s[i].set_self_num(i);
		}

		for (int j = 1; j < N; j++)
		{
			cin >> temp1 >> temp2;
			s[temp1].set_neibor_num(temp2);
			s[temp2].set_neibor_num(temp1);
		}
		
		set_sum(s, N);
		cout << find(s, N, M) << endl;

	return 0;
}