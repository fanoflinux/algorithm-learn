#include<iostream>
#include<stdio.h>
#include<malloc.h>

using namespace std;
//定义结构体-->描述单一个体
struct Node
{
	char data;
	struct Node* LChild;
	struct Node* RChild;
};
//创建节点-->创建结构体变量
struct Node* creatNode(char data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	//判断内存是否申请成功
	if (newNode == NULL)
		return NULL;
	//申请成功的话就给数据进行赋值操作即可
	newNode->data = data;
	newNode->LChild = NULL;
	newNode->RChild = NULL;
	return newNode;
}
//插入节点算法：父节点是谁，左右孩子节点分别是谁
void insertNode(struct Node* parent,struct Node* LChild,struct Node* RChild)
{
	parent->LChild = LChild;
	parent->RChild = RChild;
}
//遍历方式，分为递归遍历和非递归遍历两种
//递归遍历的方式
//前序遍历
void preOrder(struct Node* root)
{
	//根左右
	if (root != NULL)
	{
		cout << root->data<<",";
		preOrder(root->LChild);
		preOrder(root->RChild);
	}
}
//中序遍历
void midOrder(struct Node* root)
{
	if (root != NULL)
	{
		midOrder(root->LChild);
		cout << root->data << ",";
		midOrder(root->RChild);
	}
}
//后序遍历
void lastOrder(struct Node* root)
{
	if (root != NULL)
	{
		lastOrder(root->LChild);
		lastOrder(root->RChild);
		cout << root->data << ",";
	}
}
//非递归遍历的方式（迭代遍历的方式）
void preOrderBystack(struct Node* root)
{
	if (root == NULL)
		return;
	struct Node* pmove = root;
	struct Node* stack[100];//定义一个栈
	int stackTop = -1;//定义一个栈顶点的指针
	while (stackTop!=-1||pmove!=NULL)
	{
		//先走最左边，边走边打印边记录
		while (pmove!=NULL)
		{
			cout << pmove->data<<",";
			stack[++stackTop] = pmove;
			pmove = pmove->LChild;
		}
		//退出循环，进行回退
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

//层次遍历的方式-->广度的遍历方式(BFS)
void layerOrder(struct Node* root)
{
	struct Node* pmove = root;
	struct Node* queue[100];

}



int main()
{
	//创建节点(呆瓜式创建)
	struct Node* A = creatNode('A');
	struct Node* B = creatNode('B');
	struct Node* C = creatNode('C');
	struct Node* D = creatNode('D');
	struct Node* E = creatNode('E');
	struct Node* F = creatNode('F');
	struct Node* G = creatNode('G');
	//连接过程
	insertNode(A, B, C);
	insertNode(B, D, E);
	insertNode(C, NULL, F);
	insertNode(F, G, NULL);
	//进行遍历读取处理
	cout << "进行前序读取的处理:";
	preOrder(A);
	cout << endl;
	cout << "进行中序读取的处理:";
	midOrder(A);
	cout << endl;
	cout << "进行后序读取的处理:";
	lastOrder(A);
	cout << endl;
	//使用非递归法的方式进行读取
	cout << "使用非递归方法读取:";
	preOrderBystack(A);


	system("pause");
	return 0;
}