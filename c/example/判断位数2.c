#include <stdio.h>
int main()
{
	int x;
	int n=0;
	
	printf("��������Ҫ�ж�λ�������֣�",x);
	scanf("%d",&x);
	
	n=n+1;
	x=x/10;
	
	while(x>0){
		n=n+1;
		x=x/10;
	}
	
	printf("��������λ��Ϊ��%dλ\n",n);
	
	
	return 0;
}
