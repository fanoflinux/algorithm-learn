#include<iostream>
#include<malloc.h>
using namespace std;

//使用前缀数组进行存储
int Prefix_Array(int* arr,int L,int R)
{
	int* H = (int*)malloc(sizeof(int) * 5);
	//计算H数组的部分
	H[0] = arr[0];
	for (int i = 1; i < 5; i++)
	{
		H[i] = arr[i] + H[i - 1];
	}
	//计算递减数部分
	if (L == 0)
	{
		int t = H[R];
		return t;
	}
	else
	{
		int t = H[R] - H[L - 1];
		return t;
	}
	
}
//使用矩阵进行存储
int Matrices_Storage(int* arr,int L,int R)
{
	int marr [5][5];
	marr[0][0] = arr[0];
	for (int l = 1; l < 5; l++)
	{
		for (int r = 0; r < 5; r++)
		{
			if(l<=r)
			{
				marr[l][r] = marr[l - 1][r] + arr[l];
			}
			else
			{
				marr[l][r] = 0;
			}
		}
	}
	//计算递减部分
	if (L == 0&&R==0)
	{
		int t = marr[0][0];
		return t;
	}
	else
	{
		int t = marr[L][R];
		return t;
	}
}


int main()
{
	int chioce;
	cout << "输入数值选择计算方法：" <<endl;
	cout << "输入-1-使用前缀数组进行计算" << endl;
	cout << "输入-2-使用预处理结构进行计算" << endl;
	cout << "输入-0-退出计算程序" << endl;
	cin >> chioce;
	switch (chioce)
	{
	case 1:
	{
		int R,L;
		int t;
		int* arr = (int*)malloc(sizeof(int) * 5);
		cout << "请输入5个数值存入数组：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "第" << i + 1 << "个数值为：";
			cin >> arr[i];
		}
		cout << "输入计算的起点编号：(从1到5）";
		cin >> R;
		cout << "输入计算的终点编号：(从1到5）";
		cin >> L;
		t = Prefix_Array(arr, R-1, L-1);
		cout << "计算结果为：";
		cout << t;
		break;
	}
	case 2:
	{
		int R, L;
		int t;
		int* arr = (int*)malloc(sizeof(int) * 5);
		cout << "请输入5个数值存入数组：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "第" << i + 1 << "个数值为：";
			cin >> arr[i];
		}
		cout << "当前数组为：" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "第" << i + 1 << "个数值为：" << arr[i] << endl;
		}
		cout << "输入计算的起点编号：(从1到5）";
		cin >> L;
		cout << "输入计算的终点编号：(从1到5）";
		cin >> R;
		t = Matrices_Storage(arr, L, R);
		cout << "计算结果为：";
		cout << t;
		break;
	}
	case 0:
	{
		break;
	}
	default:
		break;
	}

	system("pause");
	return 0;
}