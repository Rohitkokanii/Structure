#include<stdio.h>
#include<string.h>

int main() {
	struct student {
		char name[30];
		int id;
		int marks[5];
	};

	struct student s1, s2;

	//char nm[30]
	printf("\n======================================\n");
	printf("\ns1 => %d\n",&s1);
	printf("\ns2 => %d\n",&s2);

	printf("\nEnter name : ");
	scanf_s("%[^\n]", s1.name, 30);
	//gets_s(nm,30);
	//strcpy_s(s1.name,30,nm);

	printf("\nEnter id : ");
	scanf_s("%d",&s1.id);
	printf("\nEnter Marks of 5 subjects : ");
	for (int i = 0; i < 5; i++)
		scanf_s("\t %d",&s1.marks[i]);

	printf("\nStudent s1 details : \n");
	printf("\nStudent name : %s\n", s1.name);
	printf("\n\tid : %d\n",s1.id);
	printf("\n\tMarks : ");
	for (int i = 0; i < 5; i++)
		printf("%d ",s1.marks[i]);
	s2 = s1;
	printf("\n\n\n========= Student s2 details : ============\n\n");
	printf("\nStudent name : %s \n",s2.name);
	printf("\n\tid : %d\n",s2.id);
	printf("\n\tMarks : ");
	for (int i = 0; i < 5; i++)
		printf("%d ",s2.marks[i]);

	return 0;

}