#include<iostream>
#include<malloc.h>
using namespace std;

//
void bublle(int* a,int len)
{
	if (len <= 2)
	{
		cout << "������Ԫ�ظ���С�ڵ���2����ʧȥ�������塣";
		system("pause");
	}
	//�ȶ������������
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
//��򵥵Ķ��ַ�����(ʹ���˵ݹ�ķ�����
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
//��򵥵Ķ��ֲ���(ʹ�÷ǵݹ�ķ�ʽ����)
int simple_dicho_no_recursive(int a[], int len, int find_number)
{
	int left, right, mid;
	left = 0;
	right = len - 1;
	/*ѭ������ֱ�����������߽��غ�*/
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
//������Сֵ��ˣ��ǵݹ飩
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

	cout << "����������߸���ֵ��" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "��" << i + 1 << "��ֵΪ��" ;
		cin >> a[i];
	}
	//��������
	
	//���в��Ҵ���
	int choice;
	cout << endl;
	cout << "��Ҫ���еĲ�������ѡ����" << endl;
	cout << "����-1-ѡ��ʹ�õݹ���в��Ҳ���"<<endl;
	cout << "����-2-ѡ��ʹ�÷ǵݹ���в��Ҳ���" << endl;
	cout << "����-3-ѡ��ʹ�÷ǵݹ������Сֵ����" << endl;
	cout << "����-4-������������ֲ���Сֵ" << endl;
	cout << "����-0-�˳���س���" << endl;
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
		cout << "��ǰ�����Ѿ�����Ϊ��" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num;
		cout << "����Ҫ���в��ҵ���ֵ��";
		cin >> find_num;
		int mark = simple_dicho_recursive(a, find_num, 0, sizeof(a) / sizeof(a[0]) - 1);
		if (mark == -1)
			cout << "δ�ҵ�" << endl;
		else
			cout << "�ҵ��ˣ�λ������ڣ�" << mark+1 << endl;
		break;
	}
	case 2:
	{
		bublle(a, 7);
		cout << "��ǰ�����Ѿ�����Ϊ��" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num; 
		cout << "����Ҫ���в��ҵ���ֵ��";
		cin >> find_num;
		int mark = simple_dicho_no_recursive(a,sizeof(a)/sizeof(a[0]), find_num);
		if (mark == -1)
			cout << "δ�ҵ�" << endl;
		else
			cout << "�ҵ��ˣ�λ������ڣ�" << mark + 1 << endl;
		break;
	}
	case 3:
	{
		bublle(a, 7);
		cout << "��ǰ�����Ѿ�����Ϊ��" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << a[i] << " ; ";
		}
		cout << endl;
		int find_num;
		cout << "����Ҫ���бȽϵ���ֵ" << endl;
		cin >> find_num;
		int mark = left_min(a, find_num);
		if (mark == -1)
			cout << "δ�ҵ���" << endl;
		else
			cout << "�ҵ��ˣ�λ����ֵ��" << mark + 1 << endl;
		break;
	}
	case 4:
	{
		int mark = loccal_minimum(a);
		if (mark == -1)
		{
			cout << "�����������Ч" << endl;
		}
		else
		{
			cout << "�ֲ���Сֵλ��" << mark + 1 << endl;
			cout << "�ֲ���СֵΪ��" << a[mark] << endl;
		}
		break;
	}
	default:
		break;
	}

	system("pause");
	return 0;
}