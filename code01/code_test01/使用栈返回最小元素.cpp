//#include<iostream>
//#include<stack>
//#include<cassert>
//using namespace std;
//
//class  solution
//{
//public:
//	stack<int> stackData;
//	stack<int> stackMin;
//	void push(int value)
//	{
//		stackData.push(value);
//		if (stackMin.empty())
//			stackMin.push(value);
//		else
//		{
//			if (stackMin.top() >= value)
//				stackMin.push(value);
//		}
//	}
//	void pop()
//	{
//		if (stackData.top() == stackMin.top())
//			stackMin.pop();
//		stackData.pop();
//	}
//	int top()
//	{
//		return stackData.top();
//	}
//	int min()
//	{
//		return stackMin.top();
//	}
//};
//
//int main()
//{
//	solution s1;
//	int a1, a2, a3, a4, a5, a6, a7;
//	int min1;
//	//cout << "输入7个数值进行比较操作" << endl;
//	//cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
//	s1.push(79);
//	s1.push(27);
//	s1.push(4);
//	s1.push(7897);
//	s1.push(797);
//	s1.push(645);
//	s1.push(78);
//	s1.min();
//	s1.pop();
//	s1.pop();
//	s1.min();
//
//	system("pause");
//	return 0;
//}
