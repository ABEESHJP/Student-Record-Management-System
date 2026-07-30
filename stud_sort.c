#include "student.h"

void stud_sort(ST **hptr)
{
	ST *arr[100], *temp;
	int i, j, count = 0;
	char op;

	if(*hptr == 0)
	{
		printf("\nNo Records Found...\n");
		return;
	}

	temp = *hptr;

	while(temp)
	{
		arr[count++] = temp;
		temp = temp->next;
	}

	printf("\nN/n : Sort by Name\n");
	printf("P/p : Sort by Percentage\n");

	printf("\nEnter Your Choice : ");
	scanf(" %c", &op);

	if(op=='N' || op=='n')
	{
		for(i=0;i<count-1;i++)
		{
			for(j=i+1;j<count;j++)
			{
				if(strcmp(arr[i]->name,arr[j]->name)>0)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}

		printf("\nRecords Sorted by Name\n");
	}
	else if(op=='P' || op=='p')
	{
		for(i=0;i<count-1;i++)
		{
			for(j=i+1;j<count;j++)
			{
				if(arr[i]->per < arr[j]->per)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}

		printf("\nRecords Sorted by Percentage\n");
	}
	else
	{
		printf("\nInvalid Choice...\n");
		return;
	}

	printf("\n-------------------------------------------------\n");
	printf("Roll No\t\tName\t\tPercentage\n");
	printf("-------------------------------------------------\n");

	for(i=0;i<count;i++)
	{
		printf("%d\t\t%s\t\t%.2f\n",
		arr[i]->roll,
		arr[i]->name,
		arr[i]->per);
	}

	printf("-------------------------------------------------\n");
}

