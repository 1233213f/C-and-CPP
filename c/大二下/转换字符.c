#include<stdio.h> 
void main() 
{
	char a;
	printf("������ת���ַ�:\n");
	scanf("%c",&a);
	
	if(a>='A'&&a<='Z')
	{
		a+=32; 
	}
	else
	{
		a-=32; 
	 } 
	printf("ת�����ַ�Ϊ:%c \n",a);
}
