#define   _CRT_SECURE_NO_WARNINGS 1
#include <iostream>  //����ү��ע��
using namespace std;
//�����Ķ��巽ʽ
//1.#define �곣��
//2.const ���εı���

//1.#define �곣��
#define Day 7
int main() {
   // Day = 14 //����Day�ǳ�����һ���޸ľͻᱨ��
    cout << "һ���ܹ��У�" << Day << "��" << endl;

    //2.const���εı���
    const int month = 12;
   // month = 24; //����const���εı���Ҳ��Ϊ����

    cout << "һ�깲�У�" << month << "���·�" << endl;

    system("pause");

    return 0;
}


/*int main() {
    //�����������﷨���������� ������ = ������ʼֵ
    //��Ҫ�ùؼ��ָ��������߳��������ƣ�������������
    int int a =10;
    int a = 10;
    cout << "a =" << a << endl;
    
    // cout << "hello world" << endl;  //���д���ĺ����������Ļ�����Hello world

    system("pause"); /*main��һ���������ڣ����ҽ���һ��*/

  //  return 0;
//}*/


  //��ʶ����������
  //1.��ʶ���������ǹؼ���
  //2.��ʶ��������ĸ.����.�»��߹���
  //3.��ʶ����һ���ַ�ֻ������ĸ���»���
  //4.��ʶ�������ִ�Сд��

int main() {
    //1.��ʶ���������ǹؼ���
    //int int = 10;

    //2.��ʶ��������ĸ.����.�»��߹���
    int abc = 10;
    int _abc = 10;
    int _123abc = 30;

    //3.��ʶ����һ���ַ�ֻ������ĸ���»���
    //int 123abc = 40;

    //4.��ʶ�������ִ�Сд��
    int aaa = 100;
    //cout <<AAA<<endl;  //AAA��aaa����ͬһ������
    
    //���飺������������ʱ���������������֪��
    int sum1 = 10;
    int sum2 = 20;
    int sum = sum1 + sum2;
    cout << sum << endl;

    system("pause");

    return 0;
}


