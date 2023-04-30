#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *prev;
	struct node *next;
	};

struct node *head=NULL,*ptr;
	
void Insertbegin(int x){

	struct node *newnode = malloc(sizeof(struct node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(head==NULL){
	
		head=newnode;
		return;
		}
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
	}

void Insertend(int x){

	struct node *newnode = malloc(sizeof(struct node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(head==NULL){
	
		head=newnode;
		}
	ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		}
	ptr->next=newnode;
	newnode->prev=ptr;
	newnode->next=NULL;
	}
void Insertafter(int val,int x){

	struct node *newnode = malloc(sizeof(struct node));
	newnode->data=x;
	newnode->prev=NULL;
	newnode->next=NULL;
	
	if(head==NULL){
	
		head=newnode;
		}
	ptr=head;
	while(ptr->data!=val){
	
		ptr=ptr->next;
		}
	newnode->next=ptr->next;   //the next of newnode is set to the next of node after which we want to place the value
	newnode->prev=ptr;         //previous field of the newnode is set to the found node
	ptr->next->prev=newnode;  
	ptr->next=newnode;
	
	}

void Deletebegin(){

	if(head==NULL){
		
		printf("list is empty!");
		}
		
	ptr=head;
	head=head->next;
	head->prev=NULL;
	ptr->next=NULL;
	free(ptr);	
	
	}
	
void Deleteend(){

	if(head==NULL){
		
		printf("list is empty!");
		}
		
	ptr=head;
	while(ptr->next!=NULL){
	
		ptr=ptr->next;
		}
		
	ptr->prev->next=NULL;   //next pointer of second last node is set to NULL
	ptr->prev=NULL;          //prev pointer of last node is set to NULL
	free(ptr);
	
	}
	
void Deleteafter(int val){

	if(head==NULL){
		
		printf("list is empty!");
		}
		
	ptr=head;
	while(ptr->next!=NULL){
		
		ptr=ptr->next;
		}
	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;
	ptr->next=NULL;
	ptr->prev=NULL;
	
	}
	
void display(){

	if(head==NULL){
		
		printf("list is empty!");
		}
	ptr=head;
	while(ptr!=NULL){
	
		
		printf("%d-->",ptr->data);
		ptr=ptr->next;
		
		}
	}
	
int main(){

	int choice,x,ele;
	printf("1.Insert Begin\n");
	printf("2.Insert End\n");
	printf("3.Insert After\n");
	printf("4.Delete Begin\n");
	printf("5.Delete End\n");
	printf("6.Delete After\n");
	
	do{
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice){
		
			case 1:
					printf("enter value to insert\n");
					scanf("%d",&x);
					Insertbegin(x);
					display();
					break;
					
			case 2:
					printf("enter value to insert\n");
					scanf("%d",&x);
					Insertend(x);
					display();
					break;
					
			case 3:
					printf("enter the position to insert\n");
					scanf("%d",&ele);
					printf("enter value to insert\n");
					scanf("%d",&x);
					Insertafter(ele,x);
					display();
					break;
					
			case 4:
					
					Deletebegin();
					display();
					break;
			
			case 5:
					
					Deleteend();
					display();
					break;
					
			case 6:
					
					printf("enter the position\n");
					scanf("%d",&ele);
					Deleteafter(ele);
					display();
					break;
					
			case 7:
					exit(0);
					
				}
				
			}
			while(choice!=7);
		}
	
		
