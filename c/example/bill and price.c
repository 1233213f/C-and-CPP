#include <stdio.h>
int main()
{
	int price;
	int bill;
	
	printf("��������Ľ�");
	scanf("%d",&price);
	
	printf("������Ʊ�棺");
	scanf("%d",&bill);
	
	if(bill>=price){
		printf("Ӧ��������%d��Ԫ��\n",bill-price);
	}else{
		printf("����Ǯ����\n");
	}
	return 0;
}

