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
	list();//默认构造函数
	list(const int[], int length);//用数组堆链表进行初始化
	list(const list&);//用另外一个链表堆链表进行初始化
};
