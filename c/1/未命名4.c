#include"stdio.h"
int main()
{ 
	int n,i,k,l;
	k=0;
	printf("�������ַ������Ȳ�����10���ַ���:");
	char str1[10];
	scanf("%s",&str1);
	l=strlen(str1);
	if(l>10)
	{
		printf("����������");	
	}
	else
	{
		for(i=0;i<l/2;i++)
		{
			if(str1[i]==str1[l-1-i])
			k = k+1;
		}
	if(k==l/2)
		printf("���ַ����ǻ��ĵ�\n");
	else
		printf("���ַ������ǻ��ĵ�\n");
	}
 	return 0;
}
