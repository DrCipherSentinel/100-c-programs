#include<stdio.h>
#include<math.h>
int is_armstrong(int num)
{
	int original_num,remainder,result=0,n=0;
	original_num=num;
	while(original_num!=0)
	{
		original_num=original_num/10;
		++n;
	}
	
	original_num=num;
	
	while(original_num!=0)
	{
		remainder = original_num%10;
		result=result + pow(remainder,n);
		original_num/=10;
	}
	if(result==num)
		return 1;
	else
		return 0;
}

int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(is_armstrong(num))
	{
		printf("%d is a armstrong number",num);
	}
	else
	{
		printf("%d is not a armstrong number",num);
	}
	return 0;
}
