// ˮ�ɻ�����Narcissistic number��
// Ҳ����Ϊ����ȫ���ֲ�������pluperfect digital invariant, PPDI����������������������ķ˹׳����ķ˹��������Armstrong number��
// ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
// ���磺1^3 + 5^3+ 3^3 = 153
#include <stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e, a1;
	int i; 
	
	printf("������һ������"); 
	scanf("%d",&a1);// ����һ����λ�� 
	a = a1;
	
	for(i = 0; a1 >= 1; i++)
	{
		a1 = a1 / 10;
	}
	
	// �ж��Ƿ�Ϊ��λ�� 
	if(i != 3)
	{	
	// ������λ�� 
		printf("data error");
	}
	else
	{
		//  ����λ���İ١�ʮ����������ȡ��
		b = a / 100; // ��λ��
		c = a % 100; //  ȥ����λ������
		d = c / 10;  // ʮλ��
		e = c % 10;  // ��λ��

        if(b * b * b + d * d * d + e * e * e == a)
			printf("Y\n"); 
		else
		{
			printf("N\n"); 
		}
    }
    return 0;
}
