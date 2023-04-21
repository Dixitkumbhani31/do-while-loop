#include<stdio.h>

main()

{
	int a=1,sum=0,n;
	printf("Enter Number=");
	scanf("%d",&n);
	 
	do
	{
		sum=sum+a;
		a++;
	}while(a<=n);
	printf("Sum=%d",sum);
}
