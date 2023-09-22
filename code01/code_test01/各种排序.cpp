#include<ctime>
#include<random>
#include<iostream>
#include<malloc.h>
using namespace std;

//选择排序函数
void selet_srot(int* arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int mid = arr[i];
				arr[i] = arr[j];
				arr[j] = mid;
			}
		}
	}
	
}
//冒泡排序
void bubble_srot(int* arr,int len)
{
	if (len <= 2)
	{
		cout << "该数组元素个数小于等于2个，失去排序意义。";
		system("pause");
	}
	else
	{
		for (int i = len - 1; i >> 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (arr[j - 1] > arr[j])
				{
					int temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}
//插入排序
void insertion_srot(int* arr,int len)
{
	if (len <= 2)
	{
		cout << "该数组元素个数小于等于2个，失去排序意义。";
		system("pause");
	}
	else
	{
		for (int i = 1; i < len; i++)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}
}


int main()
{
	int choice;
	cout << "请选择所用采用的排序方式：" << endl;
	cout << "1--选择排序" << endl;
	cout << "2--冒泡排序" << endl;
	cout << "3--插入排序" << endl;
	cout << "0--退出程序" << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
	{
		cout << "结束排序" << endl;
		break;
	}
	case 1:
	{
		int* arr1 = (int*)malloc(sizeof(int) * 4);
		cout << "请随机输入四个数值进行选择排序：" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "第" << i + 1 << "个数值为：";
			cin >> arr1[i];
		}
		cout << "使用选择排序之后的结果为：" << endl;
		selet_srot(arr1, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr1[i] << " ;";
		}
		cout << endl;
		cout << "/*****排序完成*****/" << endl;
		break;
	}
	case 2:
	{
		int* arr2 = (int*)malloc(sizeof(int) * 4);
		cout << "请随意输入四个数值进行冒泡排序：" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "冒泡排序第" << i + 1 << "个数值为：";
			cin >> arr2[i];
		}
		cout << "使用冒泡排序之后的结果为：" << endl;
		bubble_srot(arr2, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr2[i] << " ;";
		}
		cout << endl;
		cout << "/*****排序完成*****/" << endl;
		break;
	}
	case 3:
	{
		int* arr3 = (int*)malloc(sizeof(int) * 4);
		cout << "请随意输入四个数值进行冒泡排序：" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "插入排序第" << i + 1 << "个数值为：";
			cin >> arr3[i];
		}
		cout << "使用插入排序之后的结果为：" << endl;
		insertion_srot(arr3, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr3[i] << " ;";
		}
		cout << endl;
		cout << "/*****排序完成*****/" << endl;
		break;
	}
	default:
	{
		cout << "输入的值无效，即将退出程序"<<endl;
		break;
	}
	}

	system("pause");
	return 0;
}
