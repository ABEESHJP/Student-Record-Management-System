#include "student.h"

void stud_del(ST **hptr)
{
	ST *temp,*prev;
	int roll,flag=0;
	char op,name[30];

	if(*hptr==0)
	{
		printf("\nNo Records Found...\n");
		return;
	}

	printf("\nR/r : Delete using Roll Number\n");
	printf("N/n : Delete using Name\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c",&op);

	if(op=='R' || op=='r')
	{
		printf("Enter Roll Number : ");
		scanf("%d",&roll);
	}
	else if(op=='N' || op=='n')
        {
	int count=0;

	printf("Enter Name : ");
	scanf(" %[^\n]",name);

	temp=*hptr;

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
	else if(count==1)
	{
		printf("\nOnly One Record Found\n");
	}
	else
	{
		temp=*hptr;

		printf("\nMatching Records\n");
		printf("-------------------------------------------\n");
		printf("Roll No\t\tName\t\tPercentage\n");
		printf("-------------------------------------------\n");

		while(temp)
		{
			if(strcmp(temp->name,name)==0)
			{
				printf("%d\t\t%s\t\t%.2f\n",
				temp->roll,temp->name,temp->per);
			}
			temp=temp->next;
		}

		printf("\nEnter Roll Number to Delete : ");
		scanf("%d",&roll);
                }
        }

	else
	{
		printf("\nInvalid Choice...\n");
		return;
	}

	temp=*hptr;
	prev=0;

	while(temp)
	{
		if(temp->roll==roll)
		{
			if(temp==*hptr)
				*hptr=temp->next;
			else
				prev->next=temp->next;

			free(temp);

			printf("\nRecord Deleted Successfully...\n");
			return;
		}

		prev=temp;
		temp=temp->next;
	}

	printf("\nRecord Not Found...\n");
}

