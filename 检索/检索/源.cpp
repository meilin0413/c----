#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name[112] = {"bdoa", "ma", "ewb","jc","bsc","clpc","gc","jc","tc","mdb","fjd","alf","lf","gf","hg","ssg","jmg","fh","djh","jh","ai","zj","khj","ok","lk","bk","jl"
	,"fll","hl","zl","dl","gl","kl","jl","bo","eo","rp","zq","as","ms","ps","as","mws","jss","hlt","ckt","zw","cw","ww","cw","xx","lx","ry","xy","hz","jz","qz","wz","wg","lh"
	,"hh","jl","fq","ys","zw","sz","bdoa","alb","tc","gc","tif","cg","djh","lf","jk","gp","ip","sen","mas","tv","xx","bdoa","jc","tc","fjd","ssg","jh","lh","zj","fll","zl","mws","as"
	,"ys","lx","ssg","cj","gl","hh","jl","dl","ok","jk","cc","wms","ckt","cww","alb","jcs","jk","kl","yl"};
	string a;
	cout << "please input the name :" << endl;
	while (cin >> a)
	{
		for (int i = 0; i < 112; i++)
		{
			if (name[i] == a)
				cout << i + 1<< endl;
		}
		cout << "please input the name :" << endl;
	}
	
	system("pause");
	return 0;
}