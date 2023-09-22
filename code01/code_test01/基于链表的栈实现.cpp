///*���������ջʵ��*/
//#include<iostream>
//using namespace std;
//template<class T>
//class Stack
//{
//private:
//	struct Node
//	{
//		T data;
//		Node* next;
//	};
//	Node* head;
//	Node* p;
//	int length;
//public:
//	Stack()
//	{
//		head = NULL;
//		length = 0;
//	}
//	void push(T n)//��ջ
//	{
//		Node* q = new Node;
//		q->data = n;
//		if (head == NULL)
//		{
//			q->next = head;
//			head = q;
//			p = q;
//		}
//		else
//		{
//			q->next = p;
//			p = q;
//		}
//		length++;
//	}
//	T pop()
//	{
//		if (length <= 0)
//		{
//			abort();
//		}
//		Node* q;
//		T data;
//		q = p;
//		data = p->data;
//		p = p->next;
//		delete(q);
//		length--;
//		return data;
//	}
//	int size()//����Ԫ�ظ���
//	{
//		return length;
//	}
//	T top()
//	{
//		return p->data;
//	}
//	bool isEmpty()
//	{
//		if (length == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	void clear()
//	{
//		while (length > 0)
//		{
//			pop();
//		}
//	}
//};
//
//int main()
//{
//	Stack<char> s;
//	s.push('a');
//	s.push('b');
//	s.push('c');
//	while (!s.isEmpty())
//	{
//		cout << s.pop() << endl;
//	}
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<malloc.h>
using namespace std;
//����һ���ṹ��
struct Node
{
	int data;
	struct Node* next;
};
//����ջ�еĽڵ�,ȷ��������һ�µ�
struct Node* creatNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
};
//����ջ�Ľṹ��
struct stack 
{
	struct Node* stackTop;//ջ�����
	int size;//ջ�Ĵ�С
};
//����ջ������һ���ṹ�����������һ����ʼ������
struct stack* creatStack()
{
	struct stack* myStack = (struct stack*)malloc(sizeof(struct stack));
	myStack->stackTop = NULL;
	myStack->size = 0;
	return myStack;
}
//��ջ����
void push(struct stack* myStack, int data)
{
	//������Ľڵ���д�������
	struct Node* newNode = creatNode(data);
	//��ջ������������ı�ͷ����
	newNode->next = myStack->stackTop;
	myStack->stackTop = newNode;
	myStack->size++;
}
//��ȡջ����Ԫ��
int top(struct stack* myStack)
{
	//��ȫ��֤���ŷ�ֹջ�ǿյ�
	if (myStack->size == 0)
	{
		cout << "��ջ�ǿյģ��޷���ȡ���Ԫ��" << endl;
		system("pause");
		return myStack->size;
	}
	else
	{
		return myStack->stackTop->data;
	}
}
//��ջ����
void pop(struct stack* myStack)
{
	if (myStack == 0)
	{
		cout << "���ʵ�ջ����Ϊ�գ��޷�������Ԫ��";
		system("pause");
	}
	else
	{
		struct Node* nextNode = myStack->stackTop->next;
		free(myStack->stackTop);
		myStack->stackTop = nextNode;
		myStack->size--;
	}
}
//����ͺ���
int empty(struct stack* myStack)
{
	if (myStack->size == 0)
		return 0;
	return 1;
}

int main()
{
	struct stack* myStack = creatStack();
	push(myStack, 1);
	push(myStack, 2);
	push(myStack, 3);
	cout << "ջ�е����ݰ����������ݣ�" ;
	while (empty(myStack))
	{
		cout << top(myStack)<<";";
		pop(myStack);
	}

	system("pause");
	return 0;
}

