#include<stdio.h>

int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
	int i;
	//��ʼ������
	head=1;
	tail=10; //��������9��Ԫ����  ������һ������10
	while(head<tail)
	{
		//��ӡ���ײ������׳���
		printf("%d ",q[head]);
		head++;

		//�Ƚ��¶��׵�����ӵ���β
		q[tail]=q[head];
		tail++;
		//�ٽ����׳���
		head++;
	}
getchar();getchar();
return 0;
}