#include <iostream>
using namespace std;
int main()
{
    int a,b,c;                                //�������ͱ���
    char flag;                                //�����ַ�����
    cout<<"��������ʽ��"<<'\n';                 //��ʾ�������Ѻ�
    cin>>a>>flag>>b;                          //�������ֵ
    switch (flag)                             //switch������
    {
    case '+':c=a+b;cout<<"������Ϊ��"<<c;break;//�ӷ�
    case '-':c=a-b;cout<<"������Ϊ��"<<c;break;//����
    case '*':c=a*b;cout<<"������Ϊ��"<<c;break;//�˷�
    case '/':c=a/b;cout<<"������Ϊ��"<<c;break;//��
    default :cout<<"eroor";break;               //�������������ʾ
    }
    cout<<endl;
    return 0;                                   //����
}
