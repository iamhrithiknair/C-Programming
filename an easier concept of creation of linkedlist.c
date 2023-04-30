#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *next;
};

void createlinklist(){
                                         //creation

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *temp;
	one=(struct node *) malloc(sizeof (struct node));
	two=(struct node *) malloc(sizeof (struct node));
	three=(struct node *) malloc(sizeof (struct node));
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);

	one->next=two;
	two->next=three;
	three->next=NULL;

	temp=one;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}


void frontdeletion(){             //front deletion

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *temp;

	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	
	
	head=two;
	two->next=three;
	three->next=NULL;
	
	
	temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
	
	
	
	void insertfront(){                                           //inserting at the beginning

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *temp;
	struct node *newNode;
	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	newNode= malloc(sizeof (struct node));
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	printf("enter the value of new node: ");
	scanf("%d",&newNode->data);
	
	newNode->next=head;
	head=newNode;
	head->next=one;
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	
	temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
	
	
	
	void insertlast(){                                //insertion at last

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *temp;
	struct node *newNode;
	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	newNode= malloc(sizeof (struct node));
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	printf("enter the value of new node: ");
	scanf("%d",&newNode->data);
	
	
	head=one;
	one->next=two;
	two->next=three;
	three->next=newNode;
	newNode->next=NULL;


temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
	
	
	
	void deletionlast(){                                                      //deletion at last

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *four;
	struct node *five;
	struct node *six;
	struct node *temp;
	
	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	four= malloc(sizeof (struct node));
	five= malloc(sizeof (struct node));
	six= malloc(sizeof (struct node));
	
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	printf("enter the value of fourth node: ");
	scanf("%d",&four->data);
	printf("enter the value of fifth node: ");
	scanf("%d",&five->data);
	printf("enter the value of sixth node: ");
	scanf("%d",&six->data);
	
	head=one;
	one->next=two;
	two->next=three;
	three->next=four;
	four->next=five;
	five->next=NULL;
	
	temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
	
	
	

	
	

	
	void deletemid(){                                                          //deletion at middle

	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *four;
	struct node *five;
	struct node *six;
	struct node *temp;
	
	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	four= malloc(sizeof (struct node));
	five= malloc(sizeof (struct node));
	six= malloc(sizeof (struct node));
	
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	printf("enter the value of fourth node: ");
	scanf("%d",&four->data);
	printf("enter the value of fifth node: ");
	scanf("%d",&five->data);
	printf("enter the value of sixth node: ");
	scanf("%d",&six->data);
	
	head=one;
	one->next=two;
	two->next=three;
	three->next=five;
	four->next=five;
	five->next=six;
	six->next=NULL;
	
	
	temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
}
	
	
	
	
	
	
	void insertmid(){                                           //insertion at middle


	struct node *head;
	struct node *one;
	struct node *two;
	struct node *three;
	struct node *temp;
	struct node *newNode;
	struct node *store;
	
	one= malloc(sizeof (struct node));
	two= malloc(sizeof (struct node));
	three= malloc(sizeof (struct node));
	newNode= malloc(sizeof (struct node));
	
	printf("enter the value of first node: ");
	scanf("%d",&one->data);
	printf("enter the value of second node: ");
	scanf("%d",&two->data);
	printf("enter the value of third node: ");
	scanf("%d",&three->data);
	printf("enter the value of new node: ");
	scanf("%d",&newNode->data);
	
	head=one;
	head->next=one;
	one->next=two;
	two->next=newNode;
	newNode->next=three;
	three->next=NULL;


	temp=head;
	while (temp!=NULL){
	
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}
	
	int main(){
	
	printf("welcome to linkedlists!!");
	printf("choose your desired operation:");
	
	
	int choice;
    while (1) {
  
        printf("\t1 For Creation of Linked List\n");
        
        printf("\t2  For insertion at"
               " starting\n");
               
        printf("\t3  For insertion at"
               " end\n");
               
        printf("\t4  For insertion at "
               "any position\n");
               
        printf("\t5  For deletion of "
               "first element\n");
               
        printf("\t6  For deletion of "
               "last element\n");
               
        printf("\t7  For deletion of "
               "element at any position\n");
               
        printf("\t8 To exit\n");
        
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
        
  
        switch (choice){
        case 1:
           createlinklist();
           break;
        case 2:
            insertfront();
           break;
        case 3:
            insertlast();
            break;
        case 4:
            insertmid();
            break;
        case 5:
            frontdeletion();
            break;
        case 6:
            deletionlast();
            break;
        case 7:
            deletemid();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
