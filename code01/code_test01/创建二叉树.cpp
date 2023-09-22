#include<iostream>
#include<stdio.h>
#include<malloc.h>

using namespace std;
//����ṹ��-->������һ����
struct Node
{
	char data;
	struct Node* LChild;
	struct Node* RChild;
};
//�����ڵ�-->�����ṹ�����
struct Node* creatNode(char data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//�ж��ڴ��Ƿ�����ɹ�
	if (newNode == NULL)
		return NULL;
	//����ɹ��Ļ��͸����ݽ��и�ֵ��������
	newNode->data = data;
	newNode->LChild = NULL;
	newNode->RChild = NULL;
	return newNode;
}
//����ڵ��㷨�����ڵ���˭�����Һ��ӽڵ�ֱ���˭
void insertNode(struct Node* parent,struct Node* LChild,struct Node* RChild)
{
	parent->LChild = LChild;
	parent->RChild = RChild;
}
//������ʽ����Ϊ�ݹ�����ͷǵݹ��������
//�ݹ�����ķ�ʽ
//ǰ�����
void preOrder(struct Node* root)
{
	//������
	if (root != NULL)
	{
		cout << root->data<<",";
		preOrder(root->LChild);
		preOrder(root->RChild);
	}
}
//�������
void midOrder(struct Node* root)
{
	if (root != NULL)
	{
		midOrder(root->LChild);
		cout << root->data << ",";
		midOrder(root->RChild);
	}
}
//�������
void lastOrder(struct Node* root)
{
	if (root != NULL)
	{
		lastOrder(root->LChild);
		lastOrder(root->RChild);
		cout << root->data << ",";
	}
}
//�ǵݹ�����ķ�ʽ�����������ķ�ʽ��
void preOrderBystack(struct Node* root)
{
	if (root == NULL)
		return;
	struct Node* pmove = root;
	struct Node* stack[100];//����һ��ջ
	int stackTop = -1;//����һ��ջ�����ָ��
	while (stackTop!=-1||pmove!=NULL)
	{
		//��������ߣ����߱ߴ�ӡ�߼�¼
		while (pmove!=NULL)
		{
			cout << pmove->data<<",";
			stack[++stackTop] = pmove;
			pmove = pmove->LChild;
		}
		//�˳�ѭ�������л���
		if (stackTop != -1)
		{
			pmove = stack[stackTop--];
			pmove = pmove->RChild;
		}
	}

}
void midOrderBystack(struct Node* root)
{

}

//��α����ķ�ʽ-->��ȵı�����ʽ(BFS)
void layerOrder(struct Node* root)
{
	struct Node* pmove = root;
	struct Node* queue[100];

}



int main()
{
	//�����ڵ�(����ʽ����)
	struct Node* A = creatNode('A');
	struct Node* B = creatNode('B');
	struct Node* C = creatNode('C');
	struct Node* D = creatNode('D');
	struct Node* E = creatNode('E');
	struct Node* F = creatNode('F');
	struct Node* G = creatNode('G');
	//���ӹ���
	insertNode(A, B, C);
	insertNode(B, D, E);
	insertNode(C, NULL, F);
	insertNode(F, G, NULL);
	//���б�����ȡ����
	cout << "����ǰ���ȡ�Ĵ���:";
	preOrder(A);
	cout << endl;
	cout << "���������ȡ�Ĵ���:";
	midOrder(A);
	cout << endl;
	cout << "���к����ȡ�Ĵ���:";
	lastOrder(A);
	cout << endl;
	//ʹ�÷ǵݹ鷨�ķ�ʽ���ж�ȡ
	cout << "ʹ�÷ǵݹ鷽����ȡ:";
	preOrderBystack(A);


	system("pause");
	return 0;
}