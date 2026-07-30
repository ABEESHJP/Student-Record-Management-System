#include "student.h"

int get_roll(ST *hptr)
{
	ST *temp;
	int roll = 1, flag;

	while(1)
	{
		flag = 0;
		temp = hptr;

		while(temp)
		{
			if(temp->roll == roll)
			{
				flag = 1;
				break;
			}
			temp = temp->next;
		}

		if(flag == 0)
			return roll;

		roll++;
	}
}

void stud_add(ST **hptr)
{
	ST *new, *last;
	char ch;

	do
	{
		new = malloc(sizeof(ST));

		new->roll = get_roll(*hptr);

		printf("Enter Student Name : ");
		scanf(" %[^\n]", new->name);

		printf("Enter Percentage : ");
		scanf("%f", &new->per);

		new->next = 0;

		if(*hptr == 0)
		{
			*hptr = new;
		}
		else
		{
			last = *hptr;

			while(last->next)
				last = last->next;

			last->next = new;
		}

		printf("\nRecord Added Successfully...\n");
		//printf("Assigned Roll Number : %d\n", new->roll);

		printf("\nDo you want to add more records? (Y/N): ");
		scanf(" %c", &ch);

	}while(ch=='Y' || ch=='y');
}

