#include<ctime>
#include<random>
#include<iostream>
#include<malloc.h>
using namespace std;

//ѡ��������
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
//ð������
void bubble_srot(int* arr,int len)
{
	if (len <= 2)
	{
		cout << "������Ԫ�ظ���С�ڵ���2����ʧȥ�������塣";
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
//��������
void insertion_srot(int* arr,int len)
{
	if (len <= 2)
	{
		cout << "������Ԫ�ظ���С�ڵ���2����ʧȥ�������塣";
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
	cout << "��ѡ�����ò��õ�����ʽ��" << endl;
	cout << "1--ѡ������" << endl;
	cout << "2--ð������" << endl;
	cout << "3--��������" << endl;
	cout << "0--�˳�����" << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
	{
		cout << "��������" << endl;
		break;
	}
	case 1:
	{
		int* arr1 = (int*)malloc(sizeof(int) * 4);
		cout << "����������ĸ���ֵ����ѡ������" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "��" << i + 1 << "����ֵΪ��";
			cin >> arr1[i];
		}
		cout << "ʹ��ѡ������֮��Ľ��Ϊ��" << endl;
		selet_srot(arr1, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr1[i] << " ;";
		}
		cout << endl;
		cout << "/*****�������*****/" << endl;
		break;
	}
	case 2:
	{
		int* arr2 = (int*)malloc(sizeof(int) * 4);
		cout << "�����������ĸ���ֵ����ð������" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "ð�������" << i + 1 << "����ֵΪ��";
			cin >> arr2[i];
		}
		cout << "ʹ��ð������֮��Ľ��Ϊ��" << endl;
		bubble_srot(arr2, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr2[i] << " ;";
		}
		cout << endl;
		cout << "/*****�������*****/" << endl;
		break;
	}
	case 3:
	{
		int* arr3 = (int*)malloc(sizeof(int) * 4);
		cout << "�����������ĸ���ֵ����ð������" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << "���������" << i + 1 << "����ֵΪ��";
			cin >> arr3[i];
		}
		cout << "ʹ�ò�������֮��Ľ��Ϊ��" << endl;
		insertion_srot(arr3, 4);
		for (int i = 0; i < 4; i++)
		{
			cout << arr3[i] << " ;";
		}
		cout << endl;
		cout << "/*****�������*****/" << endl;
		break;
	}
	default:
	{
		cout << "�����ֵ��Ч�������˳�����"<<endl;
		break;
	}
	}

	system("pause");
	return 0;
}
