#ifndef __STUDENT_H__
#define __STUDENT_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
        int roll;
        char name[30];
        float per;

        struct student *next;

}ST;


/* Function Prototypes */

void stud_add(ST **);
void stud_del(ST **);
void stud_show(ST *);
void stud_mod(ST *);
void stud_save(ST *);
void stud_load(ST **);
void stud_sort(ST **);

/* Utility Function */

int get_roll(ST *);

#endif
