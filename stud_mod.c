#include "student.h"

void stud_mod(ST *hptr)
{
	ST *temp;
	int roll, count;
	float per;
	char op, ch, name[30];

	if(hptr==0)
	{
		printf("\nNo Records Found...\n");
		return;
	}

	printf("\nR/r : Roll Number\n");
	printf("N/n : Name\n");
	printf("P/p : Percentage\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c",&op);

	if(op=='R' || op=='r')
	{
		printf("Enter Roll Number : ");
		scanf("%d",&roll);

		temp=hptr;

		while(temp)
		{
			if(temp->roll==roll)
				break;

			temp=temp->next;
		}
	}

	else if(op=='N' || op=='n')
	{
		printf("Enter Name : ");
		scanf(" %[^\n]",name);

		temp=hptr;
		count=0;

		while(temp)
		{
			if(strcmp(temp->name,name)==0)
			{
				count++;
				roll=temp->roll;
			}
			temp=temp->next;
		}

		if(count==0)
		{
			printf("\nRecord Not Found...\n");
			return;
		}

		if(count>1)
		{
			temp=hptr;

			printf("\nMatching Records\n");
			printf("------------------------------------------\n");
			printf("Roll No\t\tName\t\tPercentage\n");
			printf("------------------------------------------\n");

			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("%d\t\t%s\t\t%.2f\n",
					temp->roll,temp->name,temp->per);
				}
				temp=temp->next;
			}

			printf("\nEnter Roll Number : ");
			scanf("%d",&roll);
		}

		temp=hptr;

		while(temp)
		{
			if(temp->roll==roll)
				break;

			temp=temp->next;
		}
	}

	else if(op=='P' || op=='p')
	{
		printf("Enter Percentage : ");
		scanf("%f",&per);

		temp=hptr;
		count=0;

		while(temp)
		{
			if(temp->per==per)
			{
				count++;
				roll=temp->roll;
			}
			temp=temp->next;
		}

		if(count==0)
		{
			printf("\nRecord Not Found...\n");
			return;
		}

		if(count>1)
		{
			temp=hptr;

			printf("\nMatching Records\n");
			printf("------------------------------------------\n");
			printf("Roll No\t\tName\t\tPercentage\n");
			printf("------------------------------------------\n");

			while(temp)
			{
				if(temp->per==per)
				{
					printf("%d\t\t%s\t\t%.2f\n",
					temp->roll,temp->name,temp->per);
				}
				temp=temp->next;
			}

			printf("\nEnter Roll Number : ");
			scanf("%d",&roll);
		}

		temp=hptr;

		while(temp)
		{
			if(temp->roll==roll)
				break;

			temp=temp->next;
		}
	}

	else
	{
		printf("\nInvalid Choice...\n");
		return;
	}

	if(temp==0)
	{
		printf("\nRecord Not Found...\n");
		return;
	}

	printf("\nN/n : Modify Name\n");
	printf("P/p : Modify Percentage\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c",&ch);

	if(ch=='N' || ch=='n')
	{
		printf("Enter New Name : ");
		scanf(" %[^\n]",temp->name);
	}
	else if(ch=='P' || ch=='p')
	{
		printf("Enter New Percentage : ");
		scanf("%f",&temp->per);
	}
	else
	{
		printf("\nInvalid Choice...\n");
		return;
	}

	printf("\nRecord Modified Successfully...\n");
}
