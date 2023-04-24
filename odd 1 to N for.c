#include<stdio.h>

main()

{
	int a,n;
	printf("Enter Number=");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		if(a%2==1)
		{
		    printf("%d\n",a);
	    }
	}
}
