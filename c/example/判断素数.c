#include <stdio.h>
int main()
{
	int x;
	
	printf("��������ֵ:"); 
	scanf("%d",&x);
	
	int i=2;
	int n=1;
	
	while(i<x){
		if(x%i==0){
		
			n=0;
		}
			i++;	
	}if(n==1){
		printf("������");
	}else{
		printf("��������");
	} 
	
	return 0;
}

