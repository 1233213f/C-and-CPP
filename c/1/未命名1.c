# include <stdio.h>
int main(void)
{
	int a;
    char str[10];  //str��string����д, ���ַ���
    printf("�������ַ�����");
    scanf("%s", str);  //����������Ѿ�����õ��ַ�������
    printf("��������%s\n", str);
    
    a = len(str);
    printf("%d",a);
    return 0;
}
