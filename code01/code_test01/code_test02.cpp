//#include<iostream>
//using namespace std;
//
//struct ListNode
//{
//	double value;
//	ListNode* next;
//	//构造函数
//	ListNode(double value1, ListNode* next1 = nullptr)
//	{
//		value = value1;
//		next = next1;
//	}
//};
//
//
//int main()
//{
//	double number[4];
//	for (int i = 0; i < 4; i++)
//	{
//		int a;
//		cout << "输入第" << i + 1 << "个值:";
//		cin >> a;
//		number[i] = a;
//	}
//	ListNode* numberlist = nullptr;
//	for (int i = 0; i < 4; i++)
//	{
//		numberlist = new ListNode(number[i], numberlist);
//	}
//	//打印链表中的数据
//	cout << endl << "链表中的数字包括：" << endl;
//	ListNode* ptr = numberlist;
//	while (ptr !=nullptr)
//	{
//			cout << ptr->value << "  ";
//			ptr = ptr->next;
//	}
//	return 0;
//}
