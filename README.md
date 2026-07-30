# Student Record Management System

## Overview

The Student Record Management System is a console-based application developed in C using a singly linked list. It allows users to efficiently manage student records by performing operations such as adding, deleting, modifying, displaying, sorting, saving, and loading student information.

The project demonstrates the practical implementation of linked lists, dynamic memory allocation, file handling, modular programming, and Makefile-based compilation.

---

## Features

- Add new student records
- Delete records using Roll Number or Name
- Modify records using Roll Number, Name, or Percentage
- Display all student records
- Sort records by:
  - Roll Number
  - Name
  - Percentage (Highest to Lowest)
- Save records to a file
- Load records from a file
- Supports names containing spaces
- Duplicate record handling for Modify and Delete operations

---

## Technologies Used

- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Modular Programming
- Makefile
- GCC Compiler

---

## Project Structure

```
Student-Record-Management-System/
│
├── main.c
├── student.h
├── stud_add.c
├── stud_del.c
├── stud_mod.c
├── stud_show.c
├── stud_sort.c
├── stud_save.c
├── Makefile
├── README.md
└── student.dat
---

## Compilation

Compile the project using:

make

Or compile manually:

gcc *.c -o out

---

## Execution

Run the executable:

./student 

---

## Sample Menu

```
1. Add Student
2. Delete Student
3. Modify Student
4. Show Students
5. Save Records
6. Sort Records
7. Exit
```

---

## Concepts Covered

- Structures
- Pointers
- Linked Lists
- Dynamic Memory Allocation
- File Handling
- String Handling
- Functions
- Modular Programming
- Makefile

---

## Future Enhancements

- Search by Roll Number, Name, or Percentage
- Update multiple fields simultaneously
- Record validation
- Password protection
- Database integration
- Graphical User Interface (GUI)

---

## Author

**ABEESH JP**

Embedded Systems Trainee

Skills:
- C
- C++
- Embedded C
- Data Structures
- Communication Protocols
- Networking
- Linux

---

## License

This project is intended for learning and educational purposes.
