#include <stdio.h>
int main()
{
	int x;
	int n=0;
	
	printf("��������Ҫ�ж�λ�������֣�",x);
	scanf("%d",&x);
	
	do
	{
		x/=10;
		n++;
	}while(x>0);
	
	printf("��������λ��Ϊ��%dλ\n",n);
	
	
	return 0;
}
