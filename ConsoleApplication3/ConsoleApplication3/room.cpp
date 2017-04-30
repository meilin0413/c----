#include<iostream>
#define  MAX 1000
using namespace std;

class room{
private:
	int self_route;//房间里的设备数
	int self_num;//房间号
public:
	room()
	{
		self_route = 0;
		self_num = 0;
	}
	//设置房间里的设备数
	void set_self_route(int i)
	{
		self_route = i;
	}
	//设置房间号
	void set_self_num(int i)
	{
		self_num = i;
	}
	//获取房间号
	int get_self_num()
	{
		return self_num;
	}
	//获取设备数
	int get_self_route()
	{
		return self_route;
	}

};
class struct_room{
	
private:
	int count1;
	int count2;
	int sum_route;
	room self;
	room neibor[3];
public:
	struct_room()
	{
		count1 = 0;
		count2 = 0;
		sum_route = 0;
	}
	void set_count()
	{
		count1 = 0;
		count2 = 0;
	}
	//设置自身的设备数
	void set_self_route(int i)
	{
		self.set_self_route(i);
	}
	//设置自身的房号
	void set_self_num(int i)
	{
		self.set_self_num(i);
	}
	//设置邻居的设备数
	void set_nei_route(int i)
	{
		//count2 = 0;
		neibor[count2].set_self_route(i);
		count2++;
	}//
	//设置邻居的房间号
	void set_neibor_num(int i)
	{
		//count1 = 0;
		neibor[count1] .set_self_num(i);
		count1++;
	}
	//设置自身加总的邻居的总的设备数
	void set_sum_route(int i)
	{
		sum_route = i;
	}
	int get_sum_route()
	{
		return sum_route;
	}
	//获取邻居的设备数
	int get_neibor_route(int i)
	{
		return neibor[i].get_self_route();
	}
	//获取邻居的房间号
	int get_nei_num(int i)
	{
		return neibor[i].get_self_num();
	}
	//获取自身的房间号
	int get_self_num()
	{
		return self.get_self_num();
	}
	//获取自身的设备数
	int get_self_route()
	{
		return self.get_self_route();
	}
};
void  set_sum(struct_room s[],int n)
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
	int max=0;
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
				temp = s[j+1].get_self_num();
			}
		}
		for (int k = 0; k < 3; k++)
		{
			s[s[temp].get_nei_num(k)].set_self_route(0);
		}
		s[temp].set_self_route(0);
		s[temp].set_sum_route(0);
		set_sum(s, n);
		for (int q = 1; q <= n; q++)
		{
			cout << "编号 设备数 总设备数 邻居1 邻居2 邻居3" << endl;
			cout << s[q].get_self_num() << "    " << s[q].get_self_route() << "    " << s[q].get_sum_route() << "        " << s[q].get_nei_num(0) << "    " << s[q].get_nei_num(1) << "    " << s[q].get_nei_num(2) << endl;
		}
		cout << "max:" << max << endl;
		sum = sum + max;
	}
	return sum;
}
int main()
{
	struct_room s[MAX];
	int N=0, M=0;
	cout << "please input N,M" << endl;
	cin >> N >> M;
	cout << "请输入每个房间的设备数" << endl;
	int temp;
	for (int i = 1; i <= N; i++)
	{
		cin >> temp;
		s[i].set_self_route(temp);
		s[i].set_self_num(i);
	}
	cout << "请输入每个门在哪两间房之间" << endl;
	int temp1, temp2;
	for (int j = 1; j < N; j++)
	{
		cin >> temp1 >> temp2;
		s[temp1].set_neibor_num(temp2 );
		s[temp2].set_neibor_num(temp1 );
	}
	cout << "录入成功" << endl;
	set_sum(s, N);
	for (int i = 1; i <= N; i++)
	{
		cout << "编号 设备数 总设备数 邻居1 邻居2 邻居3" << endl;
		cout << s[i].get_self_num() << "    " << s[i].get_self_route() << "    " <<s[i].get_sum_route()<<"        "<< s[i].get_nei_num(0) << "    " << s[i].get_nei_num(1) << "    " << s[i].get_nei_num(2) << endl;
	}
	int a;
	a = find(s, N, M);
	cout << "总的满足为:" << a << endl;
	system("pause");
	return 0;
}