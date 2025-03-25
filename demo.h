#include<stdio.h>
#include<string.h>
#define size 30

struct student {
	char name[size];
	int id;
	int marks[3];
};

void acceptData(struct student* s);
void display(struct student* s);