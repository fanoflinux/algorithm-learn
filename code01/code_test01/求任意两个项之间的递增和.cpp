#include<iostream>
#include<malloc.h>
using namespace std;

//ʹ��ǰ׺������д洢
int Prefix_Array(int* arr,int L,int R)
{
	int* H = (int*)malloc(sizeof(int) * 5);
	//����H����Ĳ���
	H[0] = arr[0];
	for (int i = 1; i < 5; i++)
	{
		H[i] = arr[i] + H[i - 1];
	}
	//����ݼ�������
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
//ʹ�þ�����д洢
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
	//����ݼ�����
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
	cout << "������ֵѡ����㷽����" <<endl;
	cout << "����-1-ʹ��ǰ׺������м���" << endl;
	cout << "����-2-ʹ��Ԥ����ṹ���м���" << endl;
	cout << "����-0-�˳��������" << endl;
	cin >> chioce;
	switch (chioce)
	{
	case 1:
	{
		int R,L;
		int t;
		int* arr = (int*)malloc(sizeof(int) * 5);
		cout << "������5����ֵ�������飺" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "��" << i + 1 << "����ֵΪ��";
			cin >> arr[i];
		}
		cout << "������������ţ�(��1��5��";
		cin >> R;
		cout << "���������յ��ţ�(��1��5��";
		cin >> L;
		t = Prefix_Array(arr, R-1, L-1);
		cout << "������Ϊ��";
		cout << t;
		break;
	}
	case 2:
	{
		int R, L;
		int t;
		int* arr = (int*)malloc(sizeof(int) * 5);
		cout << "������5����ֵ�������飺" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "��" << i + 1 << "����ֵΪ��";
			cin >> arr[i];
		}
		cout << "��ǰ����Ϊ��" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "��" << i + 1 << "����ֵΪ��" << arr[i] << endl;
		}
		cout << "������������ţ�(��1��5��";
		cin >> L;
		cout << "���������յ��ţ�(��1��5��";
		cin >> R;
		t = Matrices_Storage(arr, L, R);
		cout << "������Ϊ��";
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