#include<stdio.h> 
void main()
{
	int a,b,c,d;
	printf("���������������ε����߳�a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c); 
	
	if(a<b+c&&b<a+c&&c<a+b) 
	{
		if((a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)&&(a!=b&&a!=c&&b!=c))
		{
			printf("ֱ��������\n");
		}
		else if(a==b||a==c||b==c)
		{
			printf("����������\n");
		}
		else
		{
			printf("һ��������\n");
		 } 
	}
	else
	{
		printf("����������\n"); 
	 } 
 } 
