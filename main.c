#include "student.h"

int main()
{
	ST *hptr = 0;
	char op, ch;

	//stud_load(&hptr);

	while(1)
	{
		printf("****************************************************\n");
		printf("*     	        STUDENT RECORD MENU	           *\n");
		printf("****************************************************\n");
		printf("*	       [A/a] : Add New Record    	   *\n");
		printf("*     	       [D/d] : Delete a Record		   *\n");
		printf("*              [S/s] : Show the List		   *\n");
		printf("*              [M/m] : Modify a Record	           *\n");
		printf("*              [V/v] : Save			   *\n");
		printf("*	       [T/t] : Sort the List		   *\n");
		printf("*              [E/e] : Exit			   *\n");
		printf("****************************************************\n");

		printf("\nEnter Your Choice : ");
		scanf(" %c", &op);

		switch(op)
		{
			case 'A':
			case 'a':
				stud_add(&hptr);
				break;

			case 'D':
			case 'd':
				stud_del(&hptr);
				break;

			case 'S':
			case 's':
				stud_show(hptr);
				break;

			case 'M':
			case 'm':
				stud_mod(hptr);
				break;

			case 'V':
			case 'v':
				stud_save(hptr);
				break;

			case 'T':
			case 't':
				stud_sort(&hptr);
				break;

			case 'E':
			case 'e':
				printf("\nS/s : Save and Exit\n");
				printf("E/e : Exit Without Saving\n");
				printf("Enter Choice : ");
				scanf(" %c", &ch);

				if(ch=='S' || ch=='s')
				{
					stud_save(hptr);
					return 0;
				}
				else if(ch=='E' || ch=='e')
				{
					return 0;
				}
				break;

			default:
				printf("\nInvalid Choice...\n");
		}
	}

	return 0;
}


