//#include<iostream>
//#include<malloc.h>
//using namespace std;
//
////�����������
//struct Node
//{
//	int data;
//	struct Node* next;
//};
////�������
//struct Node* creatNode(int data)
//{
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//	newNode->data = data;
//	newNode->next = NULL;
//	return newNode;
//}
////���崴�����еĽṹ
//struct Queue
//{
//	struct Node* frontNode;//�����ͷ���
//	struct Node* tailNode;//�����β���
//	int size;//���еĳ���
//};
////��������
//struct Queue* creatQueue()
//{
//	struct Queue* myQueue = (struct Queue*)malloc(sizeof(struct Queue));
//	myQueue->frontNode = myQueue->tailNode = NULL;
//	myQueue->size = 0;
//	return myQueue;
//}
////����еĲ���
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
////�����в���
//void pop(struct Queue* myQueue)
//{
//	if (myQueue->size == 0)
//	{
//		cout << "����Ϊ�գ��޷����"<<endl;
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
//		cout << "�ö���Ϊ���޷�ʵ�ֳ����в���" << endl;
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
//	//����һ������
//	struct Queue* myQueue = creatQueue();
//	push(myQueue, 1);
//	push(myQueue, 2);
//	push(myQueue, 3);
//	//��ӡ���еĲ���
//	cout << "�����е�Ԫ�ذ�����" ;
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
	cout << "��ɶ������������" << endl;
	cout << "���еĳ���Ϊ��" << myQueue.size()<<endl;
	cout << "�������ж���Ԫ�صĶ�ȡ����" << endl;
	while (!myQueue.empty())
	{
		cout << myQueue.front()<<"  ;";
		myQueue.pop();
	}
	cout << endl;
	cout << "��ʱ�Ķ��еĳ���Ϊ��";
	cout << myQueue.size()<<endl;


	system("pause");
	return 0;
}