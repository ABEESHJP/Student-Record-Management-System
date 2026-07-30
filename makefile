CC = gcc

OBJ = main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_sort.o

student : $(OBJ)
	$(CC) $(OBJ) -o student

main.o : main.c student.h
	$(CC) -c main.c

stud_add.o : stud_add.c student.h
	$(CC) -c stud_add.c

stud_del.o : stud_del.c student.h
	$(CC) -c stud_del.c

stud_show.o : stud_show.c student.h
	$(CC) -c stud_show.c

stud_mod.o : stud_mod.c student.h
	$(CC) -c stud_mod.c

stud_save.o : stud_save.c student.h
	$(CC) -c stud_save.c

stud_sort.o : stud_sort.c student.h
	$(CC) -c stud_sort.c

clean :
	rm -f *.o student student.exe student.dat
