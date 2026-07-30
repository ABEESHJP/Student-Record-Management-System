#include "student.h"

void stud_save(ST *hptr)
{
	FILE *fp;
	ST *temp;

	fp = fopen("student.dat","w");

	if(fp == 0)
	{
		printf("File Cannot Be Opened\n");
		return;
	}
	fprintf(fp,"\n+----------+----------------------+------------+\n");
	fprintf(fp,"| Roll No  | Name                 | Percentage |\n");
	fprintf(fp,"+----------+----------------------+------------+\n");

	temp = hptr;

	while(temp)
	{
    	fprintf(fp,"| %-8d | %-20s | %10.2f |\n",
            temp->roll,
            temp->name,
            temp->per);

    	temp = temp->next;
	}	

	fprintf(fp,"+----------+----------------------+------------+\n");

	fclose(fp);

	printf("\nFile Saved Successfully...\n");
}

