#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
	};
	
struct node *head=NULL,*ptr;
	
void Insertbegin(int x){

	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		return;
		}
	newnode->next=head;   //if the list is not empty, then insert newnode before head that's why newnode->next will have head in its upcoming location.
	head=newnode;				//lastly we make newnode as the head, always remember that assigning values always from left to right.
	
	}

void Insertafter(int pos_value,int x){

	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		}
	ptr=head;
	while(ptr->data!=pos_value){
		ptr=ptr->next;
		}
    newnode->next=ptr->next;
	ptr->next=newnode;
	}
	
void Insertend(int x){

	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		}
	ptr=head;
	while(ptr->next!=NULL){
	
		ptr=ptr->next;
		}
	ptr->next=newnode;
	newnode->next=NULL;
	}
	
void Deletebegin(){

	if(head==NULL){
	
		printf("can't delete, list is empty!");
		}
	
	ptr=head;
	head=head->next;
	ptr->next=NULL;
	free(ptr);
	}
	
void Deleteafter(int pos_value){

	if(head==NULL){
	
		printf("can't delete, list is empty!");
		}
		
	ptr=head;
	struct node *p;
	while(ptr->data!=pos_value){
	
		p=ptr;
		ptr=ptr->next;
		}
		
	p->next=ptr->next;  //p will hold ptr's address and ptr will hold the " to be deleted node's address
	free(ptr);
	}
	
	
void Deleteend(){
	
	if(head==NULL){
	
		printf("can't delete, list is empty!");
		}
		
	ptr=head;
	struct node *p;
	while(ptr->next!=NULL){
	
		p=ptr;
		ptr=ptr->next;
		}
	p->next=NULL;
	free(ptr);   
	}
	
void display(){

	if(head==NULL){
	
		printf("the list is empty!");
		}
	
	ptr=head;
	while(ptr!=NULL){
	
		printf("%d-->",ptr->data);
		ptr=ptr->next;
		}
	}
	
int main(){
	
	int choice,x,ele;
	printf("1.Insert at Begin\n");
	printf("2.Insert at End\n");
	printf("3.Insert  After\n");
	printf("4.Delete at Begin\n");
	printf("5.Delete from End\n");
	printf("6.Delete after\n");
	
	do{
			printf("enter choice:");
			scanf("%d",&choice);
		
		switch(choice){
		
			case 1: 
					printf("enter the value to insert:");
					scanf("%d",&x);
					Insertbegin(x);
					printf("value inserted successfully");
					display();
					break;
					
			case 2:
					printf("enter the value to insert:");
					scanf("%d",&x);
					Insertend(x);
					printf("value inserted successfully");
					display();
					break;
					
			case 3:
					
					printf("enter the position to insert:");
					scanf("%d",&ele);
					
					printf("enter the value to insert:");
					scanf("%d",&x);
					
					Insertafter(ele,x);
					printf("value inserted successfully");
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
					printf("enter the position to delete:");
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
	

