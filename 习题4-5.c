#include "stdio.h"
#include "math.h"
int main()
{
	float zhengShu;
	float pingFanggen;

	printf("������һ��С��1000������ ");
	scanf("%f",&zhengShu);

	if(zhengShu>1000||zhengShu<0)
	{
		printf("����������һ��С��1000������ ");
		scanf("%f",&zhengShu);
		pingFanggen=sqrt(zhengShu);
	}
	else
	{
        pingFanggen=sqrt(zhengShu);
	}
		printf("����=%f,ƽ����=%2.0f",zhengShu,pingFanggen);

	return 0;
}


		

