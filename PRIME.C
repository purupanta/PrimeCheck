#include<stdio.h>
#include<conio.h>
main()
{
	char option;
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tPress any key to continue");
	getch();
	clrscr();
	ini:printf("\n\n\t\t\tEnter any Option below\n");
	printf("\t\t__________________________________________\n");
	printf("\n\n\n\n\t\tPress 1 for Prime Checking\n");
	printf("\t\tPress 2 for finding prime in between a numeral range\n");
	printf("\t\tPress E or e to EXIT\n\t\t");
	option=getchar();
	if (option=='1'||option=='2'||option=='e'||option=='E')
	{
		find_fn(option);
	}
	else
	{
		if(option=='\n')
		{
			clrscr();
			printf("\n\n\t\tALERT>>: You must enter a character\n");
			goto ini;
		}
		else
		{
			clrscr();
			printf("\n\n\t\tWarning>>: You entered invalid character\n");
			goto ini;
		}
	}
}
find_fn(char opt)
{
	if(opt=='1')
	{
		prime_chk();
	}
	else
	{
		if(opt=='2')
		{
			printf("\n\n\n\t\tThe Function in now Underconstruction\n");
			printf("\t\t Please press any key to go back to menu");
			getch();
			main();
		}
		else
		{
			if(opt=='e'||opt=='E')
			{
				void good_bye();
			}
		}
	}
}
prime_chk()
{
	int a0,n0;
	char stay_out,decision;
	clrscr();
	fflush(stdin);
	printf("\n\n\n\t\t\tPlease enter the number:");
	scanf("%ld",&n0);
	if(n0==1)
	{
		decision='n';
	}
	else
	{
		if(n0==2)
		{
			decision='p';
		}
		else
		{
			for(a0=2;a0<n0;a0++)
			{
				if((n0%a0)!=0)
				{
					decision='p';
					continue;
				}
				else
				{
					decision='n';
					printf("\n\t\t%d is divisible at least by %d\n",n0,a0);
					break;
				}
			}
		}
	}
	if(decision=='p')
	{
		printf("\n\n\n\t\t\t%d is PRIME\n",n0);
	}
	else
	{
		if(decision=='n')
		{
			printf("\n\n\n\t\t\t%d is NOT PRIME\n",n0);
		}
		else
		{
			printf("\n\n\n\n\t\tPlease enter positive integer only\n");
		}
	}
	fflush(stdin);
	printf("\n\n\t\tDo you want to check for another number?(y/n):");
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
			printf("\n\n\t\tPress any key to redirect to the main menu now");
			getch();
			main();
		}
	}
	getch();
	good_bye();
}
void good_bye()
{
	clrscr();
	abort();
}