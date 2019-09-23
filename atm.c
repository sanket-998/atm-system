#include<stdio.h>
#include<conio.h>
long amount=500,deposit,withdraw;
int choice,pin,k;
char transaction;
void main()
{
	
	while(pin !=1234)
	{
		printf ("\n Enter Your PIN:");
		scanf("%d",&pin);
		if(pin !=1234)
			printf("Please Enter Valid Password");
	}
	do
	{
		printf("************ Welcome TO ATM Service **************\n");
		printf("1.Check Balance\n");
		printf("2.Withdraw Cash\n");
        printf("3.Deposit Cash\n");
		printf("4.Quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\n Your Balance is Rs:%lu",amount);
			break;
			case 2:
			printf("\n Enter the amount to withdraw :");
			scanf("%lu",&withdraw);
			if(withdraw %100 !=0)
			{
				printf("\n Please Enter The amount in multiple of 100");
			}
			else if(withdraw > (amount-100))
			{
				printf("\n Insufficient Balance");
			}
			else
			{
				amount=amount-withdraw;
				printf("\n Please Collect Your Cash");
				printf("\n Your current Balance is %lu", amount);
			}
                        break;
			case 3:
			printf("\nEnter the amount to Deposit !=");
			scanf("%lu",&deposit);
			amount=amount+deposit;
			printf("\nYour Balance is %lu", amount);
			break;
			case 4:
			printf("\nThank You");
			break;
			printf("\nInvalid choice");
		}
printf("\n\n\n Do You Wish To Have Another Transaction ?(Y/N):\n");
fflush(stdin);
scanf("%c",&transaction);
if(transaction== 'n' || transaction== 'N')
k=1;
	}
while(!k);
printf("\n\n Thanks For Using ATM Service");
getch();
}	
			