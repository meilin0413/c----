#include<iostream>
using namespace std;
typedef int info;
typedef struct tree{
	struct tree *right, *left;
	info data;
}*treeList;
int index = 1;
typedef char charArray[24]; /*����һ��char��������,charArray��������Ҳ��һ��ָ��*/
charArray str;
void build(treeList &p)
{
	p = (treeList)malloc(sizeof(tree));

}