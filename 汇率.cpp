#include <stdio.h>
/* RmbToUSD������������ֵ����void����*/
void RmbToUSD(double innum, double ex_rate)   /*������һ�����Ԫ*/ 
{
	double outnum;                            /*����һ�������Ԫ*/ 
	outnum = innum/ ex_rate;                   /*����һ�������Ԫ*/ 
	printf("�ɶһ�%.2f��Ԫ\n",outnum);
 } 
 /* USDToRmb������������ֵ����void����*/
 void USDToRmb(double innum, double ex_rate)
 {
 	double outnum;
 	outnum = innum/ex_rate;
 	printf("�ɶһ�%.2f�����\n",outnum);
 }
 int main(void)
 {
 	char type;
 	double innum , ex_rate;
 	printf("��ѡ��\nA.����Ҷһ���Ԫ\nB.��Ԫ�һ������\n");
 	scanf("%c",&type);
	printf("������һ�����ͻ��ʣ����Ÿ�������\n");
	scanf("%lf,%lf",&innum,&ex_rate);
	if(type=='A')
	RmbToUSD(innum,ex_rate);
	else
	USDToRmb(innum,ex_rate);
	return 0;
 }