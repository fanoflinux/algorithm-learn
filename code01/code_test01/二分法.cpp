#include<iostream>
#include<malloc.h>
using namespace std;

//
void bublle(int* a,int len)
{
	if (len <= 2)
	{
		cout << "该数组元素个数小于等于2个，失去排序意义。";
		system("pause");
	}
	//先对数组进行排序
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[j - 1] > a[j])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
//最简单的二分法查找(使用了递归的方法）
int simple_dicho_recursive(int a[], int find_number,int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] == find_number)
		return mid;
	else if (left == right)
		return -1;
	else if (a[mid] < find_number)
		simple_dicho_recursive(a, find_number, mid + 1, right);
	else if (a[mid] > find_number)
		simple_dicho_recursive(a, find_number, left, mid - 1);
}
//最简单的二分查找(使用非递归的方式进行)
int simple_dicho_no_recursive(int a[], int len, int find_number)
{
	int left, right, mid;
	left = 0;
	right = len - 1;
	/*循环查找直到左右两个边界重合*/
	while(left<=right)
	{
		mid = (left + right) / 2;
		if (a[mid] == find_number)
		{
			return mid;
		}
		else if(a[mid]>find_number)
		{
			right = mid - 1;
		}
		else if (a[mid] < find_number)
		{
			left = mid + 1;
		}
	}
	return -1;
}
//查找最小值左端（非递归）
int left_min(int a[],int num)
{
	int left, right, mid=-1,len;
	len = sizeof(a) - sizeof(a[0] - 1);
	left = 0;
	right = len - 1;
	if (len == 0)
	{
		return -1;
	}

	while (left<=right)
	{
		mid = (left + right) / 2;
		if (a[mid] >= num)
		{
			right = mid - 1;
		}
		else if (a[mid] < num)
		{
			left = mid + 1;
		}
	}
	return mid;
}
int loccal_minimum(int a[])
{
	int right, left, mid, len;
	left = 0;
	len = sizeof(a) - (sizeof(a[0]) - 1);
	right = len - 1;
	mid = (right + left) / 2;
	if (len == 0)
	{
		return -1;
	}
	while (left < right)
	{
		/*if (a[0] < a[1])
		{
			return 0;
		}
		else if (a[right] < a[right - 1])
		{
			return right;
		}*/
		 if (a[mid] < a[mid - 1] && a[mid] < a[mid + 1])
		{
			return mid;
			break;
		}
		else
		{
			if (a[mid] > a[mid - 1])
			{
				right = mid - 1;
			}
			else if (a[mid] > a[mid + 1])
			{
				left = mid + 1;
			}
		}
	}
	return mid;
}


int main()
{
	int a[7];
	int len = sizeof(a);

	cout << "请输入随机七个数值：" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "第" << i + 1 << "数值为：" ;
		cin >> a[i];
	}
	//进行排序
	
	//进行查找处理
	int choice;
	cout << endl;
	cout << "对要进行的操作进行选择处理" << endl;
	cout << "输入-1-选择使用递归进行查找操作"<<endl;
	cout << "输入-2-选择使用非递归进行查找操作" << endl;
	cout << "输入-3-选择使用非递归进行最小值查找" << endl;
	cout << "输入-4-查找无序数组局部最小值" << endl;
	cout << "输入-0-退出相关程序" << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
	{
		break;
	}
	case 1:
	{
		bublle(a, 7);
		cout << "当前数组已经调整为：" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num;
		cout << "输入要进行查找的数值：";
		cin >> find_num;
		int mark = simple_dicho_recursive(a, find_num, 0, sizeof(a) / sizeof(a[0]) - 1);
		if (mark == -1)
			cout << "未找到" << endl;
		else
			cout << "找到了，位于数组第：" << mark+1 << endl;
		break;
	}
	case 2:
	{
		bublle(a, 7);
		cout << "当前数组已经调整为：" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num; 
		cout << "输入要进行查找的数值：";
		cin >> find_num;
		int mark = simple_dicho_no_recursive(a,sizeof(a)/sizeof(a[0]), find_num);
		if (mark == -1)
			cout << "未找到" << endl;
		else
			cout << "找到了，位于数组第：" << mark + 1 << endl;
		break;
	}
	case 3:
	{
		bublle(a, 7);
		cout << "当前数组已经调整为：" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num;
		cout << "输入要进行比较的数值" << endl;
		cin >> find_num;
		int mark = left_min(a, find_num);
		if (mark == -1)
			cout << "未找到！" << endl;
		else
			cout << "找到了，位于数值第" << mark + 1 << endl;
		break;
	}
	case 4:
	{
		int mark = loccal_minimum(a);
		if (mark == -1)
		{
			cout << "输入的数组无效" << endl;
		}
		else
		{
			cout << "局部最小值位于" << mark + 1 << endl;
			cout << "局部最小值为：" << a[mark] << endl;
		}
		break;
	}
	default:
		break;
	}

	system("pause");
	return 0;
}