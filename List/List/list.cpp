#include"list.h"
list::list() :head(NULL), tail(NULL), _size(0){}
list::list(const int a[], int length)
{
	head = tail = NULL;
	_size = 0;
	if (length > 0)
	{
		head = new listNode(a[0]);
		_size++;
		listPointer p1 = head;
		int i = 1;
		tail = p1;
		while (_size<length)
		{
			p1->next = new listNode(a[i]);
			p1->next->prev = p1;
			p1 = p1->next;
			i++;
			_size++;
			if (_size == length)
			{
				tail = p1;
			}
		}
	}
}
list::list(const list&list)
{
	head = tail = NULL;
	_size = 0;
	*this = list;
}