//#include<iostream>
//using namespace std;
//
//struct ListNode
//{
//	double value;
//	ListNode* next;
//	//���캯��
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
//		cout << "�����" << i + 1 << "��ֵ:";
//		cin >> a;
//		number[i] = a;
//	}
//	ListNode* numberlist = nullptr;
//	for (int i = 0; i < 4; i++)
//	{
//		numberlist = new ListNode(number[i], numberlist);
//	}
//	//��ӡ�����е�����
//	cout << endl << "�����е����ְ�����" << endl;
//	ListNode* ptr = numberlist;
//	while (ptr !=nullptr)
//	{
//			cout << ptr->value << "  ";
//			ptr = ptr->next;
//	}
//	return 0;
//}
