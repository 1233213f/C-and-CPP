#include <stdio.h>
#include<string.h>
int main()
{
	int a;
    char str[10];  //str��string����д, ���ַ���
    printf("�������ַ�����");
    scanf("%s", str);  //����������Ѿ�����õ��ַ�������
    printf("��������%s\n", str);
    
    a = strlen(str);
    printf("%d",a);
    return 0;
}
