#include<stdio.h>

main()

{
	int a,n,sum=0;
	printf("Enter Number=");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		sum=sum+a;
	}
	printf("Sum=%d",sum);
}
