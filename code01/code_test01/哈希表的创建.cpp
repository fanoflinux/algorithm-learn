#include<iostream>
#include<malloc.h>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
	//��ʼ����ϣ��
	cout << "��ϣ����" << endl;
	int chioce;
	unordered_map<int, int> hmap1;
	cout << "������Ҫ�����ϣ���е�Ԫ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "�����" << i + 1 << "��Ԫ��";
		cin >> hmap1[i];
	}
	while (1)
	{
		cout << "ѡ����Ҫ��ϣ����ɵ���ع���" << endl;
		cout << "����--1--�жϹ�ϣ���Ƿ�Ϊ��" << endl;
		cout << "����--2--�����ϣ�����Ԫ��" << endl;
		cout << "����--3--�����ϣ�����Ԫ��" << endl;
		cout << "����--4--�����ϣ�����Ԫ��" << endl;
		//cout << "����--5--�����ϣ��ɾ��Ԫ��" << endl;
		cout << "����������ѡ��";
		cin >> chioce;
		switch (chioce)
		{
		case 1:
		{
			bool isEmpty = hmap1.empty();
			if (isEmpty == 1)
			{
				cout << "�ù�ϣ��Ϊ��" << endl;
				break;
			}
			else
			{
				cout << "�ù�ϣ��Ϊ��" << endl;
				cout << "�ù�ϣ��ĳ���Ϊ" <<hmap1.size()<< endl;
				break;
			}
		}
		case 2:
		{
			cout << "��ϣ���е�Ԫ��Ϊ" << endl;
			unordered_map<int, int>::iterator iter = hmap1.begin();
			for (iter; iter != hmap1.end(); iter++)
			{
				cout << iter->second<<";";
			}
			break;
		}
		case 3:
		{
			int hmap_size = hmap1.size();
			int find_num;
			cout << "������Ҫ��ѯ�Ĺ�ϣ����Ԫ�ص�λ��" << endl;
			cin >> find_num;
			if (find_num > hmap_size)
			{
				cout << "�������ֵ������ϣ����" << endl;
				break;
			}
			else
			{
				cout << "�ҵ��ˣ���Ԫ��Ϊ��" << hmap1.at(find_num);
			}
		}
		default:
			break;
		}
	}
	

	cout << "�ǹ�ϣ����������" << endl;
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	//�������������
	vector<int>::iterator i;
	for (i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ;";
		*i *= 2;
	}
	cout << endl;
	cout << "������һ�����" << endl;
	//���巴�������
	for (vector<int>::reverse_iterator j = v1.rbegin(); j != v1.rend(); j++)
	{
		cout << *j << " ;";
	}
	cout << endl;
	cout << "�����ڶ������" << endl;

	system("pause");
	return 0;
}