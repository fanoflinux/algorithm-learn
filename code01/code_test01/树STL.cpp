#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;

//���������Ľṹ��
struct Node
{
	int data;
	struct Node* LChild;
	struct Node* RChild;
};
//��ʼ���ṹ�����
struct Node* creatNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->data = data;
	newNode->LChild = NULL;
	newNode->RChild = NULL;
	return newNode;
}


int main()
{

	system("pause");
	return 0;
}






//template <class T>
//class Tree
//{
//private:
//	struct Node
//	{
//		T data;
//		struct Node* Rchild;
//		struct Node* Lchild;
//	}node;
//public:
//	node CreatBST(T data);
//	void Insert(T data);
//	void find(T data);
//	void remove(T data);
//};
//
////�������ṹ
//template <class T>
//node Tree<T>::CreatBST(T data)
//{
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	if (newNode == NULL)
//	{
//		return NULL;
//	}
//}
//
////���ò�����ֵ�ĺ���
//template <class T>
//void Tree<T>::Insert(T data)
//{
//
//}