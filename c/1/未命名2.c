#include"stdio.h"
#include"string.h"
int main()
{ 
	int n,i,k,l;
	printf("�������ַ������Ȳ�����10���ַ���:");
	char str1[10],str2[10],str3[10];

	gets(str1);
	l=strlen(str1);

	for(i=0;i<l/2+1;i++)
	{
		str2[i]=str1[i];
		str3[i]=str1[l-1-i];
	}	
	if(str2[i]=str3[i])
		printf("���ַ����ǻ��ĵ�\n");
	else 
		printf("���ַ������ǻ��ĵ�\n");
 	return 0;
}
