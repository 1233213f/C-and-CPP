//����һ���ٷ��Ƴɼ���Ҫ������ɼ��ȼ�"��"��"��"��"��"��"��"��"��"��90������Ϊ"��"��81��89��Ϊ"��"��70��79Ϊ"��"��60��69Ϊ"��"��60������Ϊ"��"
//���������ݴ���100��С��0ʱ��֪ͨ�û�"�������ݴ�"���������
//����switch������ʵ�֡�
//��1���㷨��ʾ�� �ٶ���ٷ��Ƴɼ�(ʵ����)score ������ʾ����"Please enter score:" ���۶���score �����ж�score���ڵ����䣬��Ӧ��score�ĵȼ�����ӡ��Ӧ�ȼ�����һ��ϸ����
//��2����switch���ʵ�ֵ�Դ����
//��3����������д�ĳ���
#include <stdio.h>
#include <math.h>

int main() {
	
    int s, a;  //������������
    printf("Please enter score:");  //�����ʾ��Ϣ
    scanf("%d", &s);  //��ȡ�û��������ֵ
    
    if(s > 100 || s < 0)
    {
    	printf("�������ݴ���");
	}
    else
	{
		switch(s/10)
		{
        case 9 : 
			printf("A\n"); 
			break;
		case 8 : 
			printf("B\n"); 
			break;
		case 7 : 
			printf("C\n"); 
			break;
		case 6 : 
			printf("D\n"); 
			break;
        default:
			printf("E\n"); 
			break;
    	}
	} 

    return 0;
}

