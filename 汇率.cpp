#include <stdio.h>
/* RmbToUSD函数，不返回值，用void定义*/
void RmbToUSD(double innum, double ex_rate)   /*将人民币换成美元*/ 
{
	double outnum;                            /*定义兑换出的美元*/ 
	outnum = innum/ ex_rate;                   /*计算兑换出的美元*/ 
	printf("可兑换%.2f美元\n",outnum);
 } 
 /* USDToRmb函数，不返回值，用void定义*/
 void USDToRmb(double innum, double ex_rate)
 {
 	double outnum;
 	outnum = innum/ex_rate;
 	printf("可兑换%.2f人民币\n",outnum);
 }
 int main(void)
 {
 	char type;
 	double innum , ex_rate;
 	printf("请选择：\nA.人民币兑换美元\nB.美元兑换人民币\n");
 	scanf("%c",&type);
	printf("请输入兑换数额和汇率（逗号隔开）：\n");
	scanf("%lf,%lf",&innum,&ex_rate);
	if(type=='A')
	RmbToUSD(innum,ex_rate);
	else
	USDToRmb(innum,ex_rate);
	return 0;
 }