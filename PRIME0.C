#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	fflush(stdin);
	getch();
	prime_chk2();
}
prime_chk2()
{
	int b0,a0,n0,a;
	char stay_out,decision;
	clrscr();
	fflush(stdin);
	printf("\n\n\n\t\t\tPlease enter the number U:");
	scanf("%d",&n0);
	printf("%d",n0);
	if(n0==1)
	{
		printf("\n\t\tThere is no primes in U(1)\n");
	}
	else
	{
		if(n0==2)
		{
			printf("\n\t\tThe only prime in U(2) is: 2\n");
		}
		else
		{
			int pr[20],npr[20];
			for(a0=2;a0<n0;a0++)
			{
				for(b0=2;b0<=a0;++b0)
				{
					if((n0%b0)!=0&&(a0%b0)!=0)
					{

						/*printf("\n\t\t%d is a prime in U(%d)\n",a0,n0);*/
						/*int pr[20];*/
						pr[b0]=a0;
					}
					else
					{
						/*printf("\t\t%d is not a prime in U(%d)\n",a0,n0);*/
						/*int npr[20];*/
						npr[b0]=a0;
					}
				}
			}
		}
	}
	getch();
	printf("\n\t\tprimes are:\n");
	/*int a;*/
	for( a=0;a<=20;++a)
	{
		printf("\t%d",*pr[a]);
	}
	printf("\n\t\tNon primes are:\n");
	for(a=0;a<=20;++a)
	{
		printf("\t%d",*npr[a]);

	}
	else
	{
		if(decision=='n')
		{
		}
		else
		{
		}
	}
	fflush(stdin);
	printf("\n\n\tDo you want to check for another number?(y/n):");
	stay_out=getchar();
	if(stay_out=='Y'||stay_out=='y')
	{
		main();
	}
	else
	{
		if(stay_out=='N'||stay_out=='n')
		{
			good_bye();
		}
		else
		{
			printf("\n\n\t\tInvalid Characters entered!\n");
			printf("\t\tPress any key to redirect to the main menu now");
			getch();
			main();
		}
	}
	getch();
	good_bye();
}
good_bye()
{
	clrscr();
	abort();
}