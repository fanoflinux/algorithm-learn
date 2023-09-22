#include<iostream>
#include<malloc.h>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
	//初始化哈希表
	cout << "哈希表部分" << endl;
	int chioce;
	unordered_map<int, int> hmap1;
	cout << "请输入要放入哈希表中的元素" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "输入第" << i + 1 << "个元素";
		cin >> hmap1[i];
	}
	while (1)
	{
		cout << "选择所要哈希表完成的相关功能" << endl;
		cout << "输入--1--判断哈希表是否为空" << endl;
		cout << "输入--2--进入哈希表遍历元素" << endl;
		cout << "输入--3--进入哈希表查找元素" << endl;
		cout << "输入--4--进入哈希表插入元素" << endl;
		//cout << "输入--5--进入哈希表删除元素" << endl;
		cout << "请输入您的选择：";
		cin >> chioce;
		switch (chioce)
		{
		case 1:
		{
			bool isEmpty = hmap1.empty();
			if (isEmpty == 1)
			{
				cout << "该哈希表为空" << endl;
				break;
			}
			else
			{
				cout << "该哈希表不为空" << endl;
				cout << "该哈希表的长度为" <<hmap1.size()<< endl;
				break;
			}
		}
		case 2:
		{
			cout << "哈希表中的元素为" << endl;
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
			cout << "请输入要查询的哈希表中元素的位置" << endl;
			cin >> find_num;
			if (find_num > hmap_size)
			{
				cout << "输入的数值超过哈希表长度" << endl;
				break;
			}
			else
			{
				cout << "找到了，该元素为：" << hmap1.at(find_num);
			}
		}
		default:
			break;
		}
	}
	

	cout << "非哈希迭代器部分" << endl;
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	//定义正向迭代器
	vector<int>::iterator i;
	for (i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ;";
		*i *= 2;
	}
	cout << endl;
	cout << "迭代第一次完成" << endl;
	//定义反向迭代器
	for (vector<int>::reverse_iterator j = v1.rbegin(); j != v1.rend(); j++)
	{
		cout << *j << " ;";
	}
	cout << endl;
	cout << "迭代第二次完成" << endl;

	system("pause");
	return 0;
}