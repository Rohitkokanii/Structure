#include<string.h>
#include<stdio.h>

struct student {
	char name[30];
	int id;
	int marks[3];
};

void display1(struct student stud) {
	strcpy_s(stud.name,30,"dinesh");
	printf("\nin display function \n");
	printf("\n\n student name : %s",stud.name);
	printf("\n\n \tid : %d ",stud.id);
	printf("\n\n \t marks : [%d,%d,%d]\n\n", stud.marks[0], stud.marks[1], stud.marks[2]);
}

int main() {

	struct student s1;
	strcpy_s(s1.name, 30, "shivani");
	s1.id = 1001;
	s1.marks[0] = 78;
	s1.marks[1] = 88;
	s1.marks[2] = 45;

	display1(s1);

	printf("\n========= in main function =============\n");
	printf("\n\nstudent name: %s",s1.name);
	printf("\n\n\tid : %d",s1.id);
	printf("\n\n\tmarks : [%d,%d,%d] \n\n",s1.marks[0], s1.marks[1], s1.marks[2]);

	return 0;
}