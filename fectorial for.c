#include<stdio.h>

main()

{
	int a,n,fect=1;
	printf("Enter Number=");
	scanf("%d",&n);
	
	for(a=1;n>=1;n--)
	{
		fect=fect*n;
	}
	printf("Fectorial Value=%d",fect);
}
