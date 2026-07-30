#include "student.h"

void stud_show(ST *hptr)
{
	if(hptr == 0)
	{
		printf("\nNo Records Found...\n");
		return;
	}

	printf("\n  +----------+----------------------+------------+\n");
	printf("  | Roll No  | Name                 | Percentage |\n");
	printf("  +----------+----------------------+------------+\n");

	while(hptr)
	{
    	printf("  | %-8d | %-20s | %10.2f |\n",
           hptr->roll,
           hptr->name,
           hptr->per);

    	hptr = hptr->next;
	}

	printf("  +----------+----------------------+------------+\n");
}
