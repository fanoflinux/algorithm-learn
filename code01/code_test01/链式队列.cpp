//#include<iostream>
//#include<malloc.h>
//using namespace std;
//
////定义结点的内容
//struct Node
//{
//	int data;
//	struct Node* next;
//};
////创建结点
//struct Node* creatNode(int data)
//{
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//}
////定义创建队列的结构
//struct Queue
//{
//	struct Node* frontNode;//定义队头结点
//	struct Node* tailNode;//定义队尾结点
//	int size;//队列的长度
//};
////创建队列
//struct Queue* creatQueue()
//{
//	struct Queue* myQueue = (struct Queue*)malloc(sizeof(struct Queue));
//	myQueue->frontNode = myQueue->tailNode = NULL;
//	myQueue->size = 0;
//	return myQueue;
//}
////入队列的操作
//void push(struct Queue* myQueue,int data)
//{
//	struct Node* newNode = creatNode(data);
//	if (myQueue->size == 0)
//	{
//		myQueue->frontNode = myQueue->tailNode = newNode;
//	}
//	else
//	{
//		myQueue->tailNode->next = newNode;
//		myQueue->tailNode = newNode;
//	}
//	myQueue->size++;
//
//}
////出队列操作
//void pop(struct Queue* myQueue)
//{
//	if (myQueue->size == 0)
//	{
//		cout << "队列为空，无法输出"<<endl;
//		system("pause");
//	}
//	else
//	{
//		struct Node* nextNode = myQueue->frontNode->next;
//		free(myQueue->frontNode);
//		myQueue->frontNode = nextNode;
//		myQueue->size--;
//	}
//}
//int front(struct Queue* myQueue)
//{
//	if (myQueue->size == 0)
//	{
//		cout << "该队列为空无法实现出队列操作" << endl;
//		system("puase");
//		return myQueue->size;
//	}
//	else
//	{
//		return myQueue->frontNode->data;
//	}
//
//}
//int empty(struct Queue* myQueue)
//{
//	if (myQueue->size == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	//创建一个队列
//	struct Queue* myQueue = creatQueue();
//	push(myQueue, 1);
//	push(myQueue, 2);
//	push(myQueue, 3);
//	//打印队列的操作
//	cout << "队列中的元素包括：" ;
//	while (empty(myQueue))
//	{
//		cout << front(myQueue)<<" ;";
//		pop(myQueue);
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> myQueue;
	for (int i = 0; i < 10; i++)
	{
		myQueue.push(i);
	}
	cout << "完成队列输入操作！" << endl;
	cout << "队列的长度为：" << myQueue.size()<<endl;
	cout << "后续进行队列元素的读取操作" << endl;
	while (!myQueue.empty())
	{
		cout << myQueue.front()<<"  ;";
		myQueue.pop();
	}
	cout << endl;
	cout << "此时的队列的长度为：";
	cout << myQueue.size()<<endl;


	system("pause");
	return 0;
}