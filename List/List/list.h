#include<iostream>
using namespace std;

typedef struct node{
	int data;
	node *prev;
	node *next;
	node(int data = 0, node* next = NULL, node* prev = NULL)
		: data(data), next(next), prev(prev){};
};
typedef node listNode;
typedef node* listPointer;
typedef unsigned int size_type;
class list{
public:
	listPointer head;
	listPointer tail;
	size_type _size;
	list();//Ĭ�Ϲ��캯��
	list(const int[], int length);//�������������г�ʼ��
	list(const list&);//������һ�������������г�ʼ��
};
