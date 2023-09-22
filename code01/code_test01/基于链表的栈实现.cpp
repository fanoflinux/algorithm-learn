///*基于链表的栈实现*/
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
//	void push(T n)//入栈
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
//	int size()//返回元素个数
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
//定义一个结构体
struct Node
{
	int data;
	struct Node* next;
};
//定义栈中的节点,确保类型是一致的
struct Node* creatNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
};
//定义栈的结构体
struct stack 
{
	struct Node* stackTop;//栈顶标记
	int size;//栈的大小
};
//创建栈，创捷一个结构体变量，就是一个初始化变量
struct stack* creatStack()
{
	struct stack* myStack = (struct stack*)malloc(sizeof(struct stack));
	myStack->stackTop = NULL;
	myStack->size = 0;
	return myStack;
}
//入栈操作
void push(struct stack* myStack, int data)
{
	//将插入的节点进行创建操作
	struct Node* newNode = creatNode(data);
	//入栈操作就是链表的表头插入
	newNode->next = myStack->stackTop;
	myStack->stackTop = newNode;
	myStack->size++;
}
//获取栈顶的元素
int top(struct stack* myStack)
{
	//安全保证，放防止栈是空的
	if (myStack->size == 0)
	{
		cout << "该栈是空的，无法获取相关元素" << endl;
		system("pause");
		return myStack->size;
	}
	else
	{
		return myStack->stackTop->data;
	}
}
//出栈操作
void pop(struct stack* myStack)
{
	if (myStack == 0)
	{
		cout << "访问的栈内容为空，无法获得相关元素";
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
//万金油函数
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
	cout << "栈中的内容包含如下内容：" ;
	while (empty(myStack))
	{
		cout << top(myStack)<<";";
		pop(myStack);
	}

	system("pause");
	return 0;
}

