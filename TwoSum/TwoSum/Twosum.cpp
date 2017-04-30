#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>& a, int k)
{
	int length = a.size();
	int h = length - k;
	int temp=a[h];
	
	for (int i = 1; i < length; i++)
	{
		a[h] = a[(h - i*k) % length];
		h = h - i*k;
	}
	a[h] = temp;
	return a;
}
int main(){
	vector<int> a(5);
	for (int i = 0; i < 5; i++){
		a[i] = i + 1;
	}
	a = reverse(a, 2);
	for (int i = 0; i < 5; i++){
		cout << a[i] << endl;
	}
}