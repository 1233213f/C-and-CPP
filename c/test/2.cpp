#include <stdio.h>
#include <math.h>
int power(int num,int index);

int main() {
    int a, b;  //������������
    printf("������һ����:");  //�����ʾ��Ϣ
    scanf("%d", &a);  //��ȡ�û��������ֵ
    printf("�����������:");  //�����ʾ��Ϣ
    scanf("%d", &b);  //��ȡ�û��������ֵ
    printf("result: %d\n", power(a, b));  //������

    return 0;
}
int power(int num,int index)
{
    if(index==0)
    {
        return 1;
    }
    else return num*power(num,index-1);
}
