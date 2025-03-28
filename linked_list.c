#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * next;
};

int main() {

	struct node* head, * newNode,*temp;
	int choice = 1;
	head = 0;
	
	while (choice) {
		newNode = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter Data\n");
		scanf_s("%d",&newNode->data);
		newNode->next = 0;

		if (head == 0) {
			head = temp = newNode;
		}
		else {
			temp->next = newNode;
			temp = newNode;
		}
		printf("\nDo you want to continue (0,1) : ");
		scanf_s("%d",&choice);
	}
	temp = head;
	while (temp != 0) {
		printf("%d",temp->data);
		temp = temp->next;
	}
	//getch();
	
	return 0;
}
