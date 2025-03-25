#include "demo.h"

void acceptData(struct student* s) {

	//Name
	printf("\nEnter Name : ");
	scanf_s("%[^\n]s", s->name,30);

	//Id
	printf("\nEnter ID : ");
	scanf_s("%d",&s->id);

	//marks
	printf("\nEnter Marks : ");
	for (int i = 0; i < 3; i++) {
		printf("\nEnter Sub %d Marks : ",i+1);
		scanf_s("%d",&s->marks[i]);
	}
}
void display(struct student* s) {

	printf("\nName : %s\n",s->name);
	printf("\nId : %d\n",s->id);
	printf("\nMarks : ");
	for (int i = 0; i < 3; i++)
		printf("%d ",s->marks[i]);          
	printf("\n\n");
}