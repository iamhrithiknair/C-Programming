#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	};
	
struct node *createnode(int data){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
	}
	
void insertnode(struct node **headref,int data){
	struct node *newnode=createnode(data);
	if(*headref==NULL){
		*headref=newnode;
		return;
		}
	
	struct node *temp=*headref;
	while(temp->next!=NULL){
		temp=temp->next;
		}
	temp->next=newnode;
	}

void reverselist(struct node **headref){

	struct node *prev=NULL;
	struct node *next=NULL;
	struct node *current=*headref;
	
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		}
	*headref=prev;
	}
	
void display(struct node *head){
	if(head==NULL){
		printf("list is empty");
		}
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
		}
	printf("\n");
	}
	
int main(){
	
	struct node *head=NULL;
	int n,data;
	
	printf("enter the no of terms:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		insertnode(&head,data);
		}
	
	printf("original list:");
	display(head);
	printf("reversed list:");
	reverselist(&head);
	display(head);
	
}
	
