#include<iostream>
#include<vector>
using namespace std;
vector<int> insertSort(vector<int> &a);
//vector<int> insertSortRecur(vector<int> &a, int n);//���õݹ�˼��������������
vector<int> mergeSort(vector<int> &a, int p, int q, int r);
vector<double> merge(vector<double> &a, int p, int q, int r);
vector<int> mergeSort(vector<int>&a, int p, int r);
vector<int> bubbleSort(vector<int>&a);
int left(int i);
int right(int i);
void exchange(int &a, int &b);
void max_heapify(vector<int> &a, int i);
void build_max_heapify(vector<int>& a);
void heapSort(vector<int> &a);
//��������ʵ��������ȶ���
int partition(vector<int> &a, int p, int r);
void quickSort(vector<int> &a, int p, int r);