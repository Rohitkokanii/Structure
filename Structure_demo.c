#include<stdio.h>
#include<string.h>
#define size 30


int main() {
	struct student {
		char name[size];
		int id;
		int marks[3];
	};

	struct student s1, s2, s3, s4;
	
	strcpy_s(s1.name, 30, "shivani");

	s1.id = 1001;
	s1.marks[0] = 75;
	s1.marks[1] = 55;
	s1.marks[2] = 67;

	printf("\n %d \n\n", sizeof(s1));
	printf("\nfor name %d \n\n", s1.name);
	printf("\nfor id %d \n\n",&s1.id);
	printf("for marks %d\n\n",s1.marks);

	printf("\n\nStudent name : %s\n\n",s1.name);
	printf("\n\n\t id : %d\n\n",s1.id);
	printf("\n\n\tMarks [%d,%d,%d]\n\n",s1.marks[0],s1.marks[1],s1.marks[2]);


	return 0;
}
