#include <stdio.h>

int main()
{
	int amount;
	int price;
	
	printf("�������Ԫ��:");
	scanf("%d",&price);
	
	printf("������Ʊ�棨Ԫ��:");
	scanf("%d",&amount);
	
	int change=amount-price;
	
	printf("����%dԪ\n",change);
	
	return 0;
}
