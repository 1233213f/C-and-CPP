#include <stdio.h>
int main()
{
	const int pass=60;
	int score;
	
	printf("������ɼ���");
	scanf("%d",&score);
	
	printf("��ĳɼ���%d.\n",score);
	if(score<pass){
		printf("û����"); 
	}else{
		printf("����"); 
	}printf("bye");
	
	return 0;
}
