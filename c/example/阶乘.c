#include <stdio.h>
int main()
{
	int i=1;
	int n;
	
	printf("�׳˵�����",n);
	scanf("%d",&n);
	
	int m=1;
	
	do
	{
		m=m*i;
		i++;
	}while(n>=i);
	
	printf("�׳˽��Ϊ��%d!=%d\n",n,m);
	
	
	return 0;
}
