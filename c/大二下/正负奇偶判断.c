#include<stdio.h> 

/*
void main()
{
	int a;
	scanf("%d",&a);

	if(a>0)
	{
		printf("����\n");
	}
	else if(a==0)
	{
		printf("�Ȳ�������Ҳ���Ǹ���\n");
	}
	else
	{
		printf("����\n");
	} 
	
	if(a%2==0&&a>0)
	{
		 printf("ż��\n");
	}
	else
	{
		printf("����\n");
	}
	
 }
 */
 
 void main()
 {
	int a;
	printf("�������ж�������ż������:\n"); 
	scanf("%d",&a);
	
	 
	if(a%2==0)
	{
		if(a>0)
		{ 
			printf("��ż��\n");
		}
		else if(a==0)
		{
			printf("�����Ǹ���Ϊż��"); 
		}
		else
		{
			printf("��ż��"); 
		}		 
	 } 
	else
	{
		if(a>0)
		{ 
			printf("������\n");
		}
		else if(a==0)
		{
			printf("�����Ǹ���Ϊ����"); 
		}
		else
		{
			printf("������"); 
		}		 
	} 

	
  } 
