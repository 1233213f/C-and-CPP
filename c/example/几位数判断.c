#include <stdio.h>
int main()
{
	int x;
	int n;
	
	printf("��������Ҫ�ж�λ�������֣�",x);
	scanf("%d",&x) ;
	
	if(x>999){
		n=4;
	}else if(x>99){
		n=3;
	}else if(x>9){
		n=2;
	}else{
		n=1;
	}
	printf("��������λ��Ϊ��%dλ\n",n);
	
	return 0;
}
