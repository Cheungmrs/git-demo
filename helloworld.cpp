#define   _CRT_SECURE_NO_WARNINGS 1
#include <iostream>  //这是爷的注释
using namespace std;
//常量的定义方式
//1.#define 宏常量
//2.const 修饰的变量

//1.#define 宏常量
#define Day 7
int main() {
   // Day = 14 //错误，Day是常量，一旦修改就会报错
    cout << "一周总共有：" << Day << "天" << endl;

    //2.const修饰的变量
    const int month = 12;
   // month = 24; //错误，const修饰的变量也称为常量

    cout << "一年共有：" << month << "个月份" << endl;

    system("pause");

    return 0;
}


/*int main() {
    //变量创建的语法：数据烈性 变量名 = 变量初始值
    //不要用关键字给变量或者常量其名称，否则会产生歧义
    int int a =10;
    int a = 10;
    cout << "a =" << a << endl;
    
    // cout << "hello world" << endl;  //这行代码的含义就是在屏幕中输出Hello world

    system("pause"); /*main是一个程序的入口，有且仅有一个*/

  //  return 0;
//}*/


  //标识符命名规则
  //1.标识符不可以是关键字
  //2.标识符是由字母.数字.下划线构成
  //3.标识符第一个字符只能是字母或下划线
  //4.标识符是区分大小写的

int main() {
    //1.标识符不可以是关键字
    //int int = 10;

    //2.标识符是由字母.数字.下划线构成
    int abc = 10;
    int _abc = 10;
    int _123abc = 30;

    //3.标识符第一个字符只能是字母或下划线
    //int 123abc = 40;

    //4.标识符是区分大小写的
    int aaa = 100;
    //cout <<AAA<<endl;  //AAA和aaa不是同一个名称
    
    //建议：给变量起名的时候，最好能做到见名知意
    int sum1 = 10;
    int sum2 = 20;
    int sum = sum1 + sum2;
    cout << sum << endl;

    system("pause");

    return 0;
}


