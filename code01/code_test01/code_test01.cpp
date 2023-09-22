#include <iostream>
#include<string>
using namespace std;

int* gen_list()
{
    static int a[3] = {0,1,2};
    return a;
}



int main()
{
    int* p;
    p = gen_list();
    for (int i = 0; i < 3; i++)
    {
        cout << *(p + i) << endl;
    }
    std::cout << "Hello World!\n";
}

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//// 要生成和返回随机数的函数
//int* getRandom()
//{
//    static int  r[10];
//
//    // 设置种子
//    srand((unsigned)time(NULL));
//    for (int i = 0; i < 10; ++i)
//    {
//        r[i] = rand();
//        cout << r[i] << endl;
//    }
//
//    return r;
//}
//
//// 要调用上面定义函数的主函数
//int main()
//{
//    // 一个指向整数的指针
//    int* p;
//
//    p = getRandom();
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "*(p + " << i << ") : ";
//        cout << *(p + i) << endl;
//    }
//
//    return 0;
//}