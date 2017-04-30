#include<iostream>
using namespace std;
typedef int info;
typedef struct tree{
	struct tree *right, *left;
	info data;
}*treeList;
int index = 1;
typedef char charArray[24]; /*声明一个char类型数组,charArray是数组名也是一个指针*/
charArray str;
void build(treeList &p)
{
	p = (treeList)malloc(sizeof(tree));

}