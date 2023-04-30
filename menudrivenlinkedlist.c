#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};

struct node *head=NULL, *ptr; //initialising head = null as we assume the list to be empty.

void insert_begin(int value){

	struct node *temp;
	temp=malloc(sizeof (struct node));
	temp->data=value;
	temp->next=NULL;
	
	if(head==NULL){
	
		head=temp;  //if list is empty then our inserting element is first as well as the last element
	}
	else{
		
		temp->next=head;   //if list is not empty, we should insert our node before head
		head=temp;			//after that assign headto our node
	}
}

void insert_end(int value){

	struct node *temp;
	temp=malloc(sizeof (struct node));
	temp->data=value;
	temp->next=NULL;
	
	if(head==NULL){
	
		head=temp;
	}
	
	else{
	
		ptr=head;
		while(ptr->next!=NULL){     //loop will run until ptr->next = null is reached. On reaching, ptr->next = our value & our value->next = NULL so that last node is inserted.
			
			ptr=ptr->next;
			
		}
		
		ptr->next=temp;
		temp->next=NULL;
	}
}
		
void insert_after_specified(int value, int ele){

	struct node *temp;
	temp=malloc(sizeof (struct node));
	temp->data=value;
	temp->next=NULL;
	
	if(head==NULL){
	
		head=temp;  //if list is empty then our inserting element is first as well as the last element
	}
	
	else{
	
		ptr=head;
		while(ptr->data!=ele){     
			
			ptr=ptr->next;
		}
		
		temp->next=ptr->next;              //after reaching ptr->next=element entered by user, then ptr->next will be holding the address of temp,which means after the element our value is there.
		ptr->next=temp;
	}
}

void delete_begin(){

	
	if(head==NULL){
	
		printf("the list is empty");
	}
	else{
	
		ptr=head;
		head=head->next;    //after executing this statement, second node will become the head
		ptr->next=NULL;
		void free(void *ptr);
	}
}

void delete_end(){

	
	if(head==NULL){
	
		printf("the list is empty");
	}
	
	else{
	
		ptr=head;
		struct node *p;
		while(ptr->next!=NULL){
		
			p=ptr;                   // p will contain ptr's address and ptr will point to ptr->next
			ptr=ptr->next;
		}
		p->next=NULL;               //when p->next is null, then there is no node pointed by ptr as connection b/w them cancels
		void free(void *ptr);
	}
}

void delete_mid(int ele){

	if(head==NULL){
	
		printf("the list is empty");
	}
	
	else{
	
		ptr=head;
		struct node *p;
		
		while(ptr->data!=ele){
		
			p=ptr;
			ptr=ptr->next;
		}
		p->next=ptr->next;       //the link will be connected between p->next and ptr->next and there will be no element b/w them.
		void free(void *ptr);
	}
}


void display(){

	if(head==NULL){
		
		printf("the list is empty");
		
	}
	else{
	
	ptr=head;
	while(ptr!=NULL){
	
		printf("-->%d", ptr->data);
		ptr=ptr->next;
	   }
	}
}

int main(){

	int choice,value,ele;
	
	printf("1. Insert Begin\n");
	printf("2. Insert End\n");
	printf("3. Insert After_Specified_Element\n");
	printf("4. Delete Begin\n");
	printf("5. Delete last\n");
	printf("6. Delete Middle\n");
	printf("7. Exit\n");
	
	while(1){
	
		printf("enter choice:");
		scanf("%d",&choice);
		
		switch(choice){
		
			case 1:{
				
				printf("enter the value:");
				scanf("%d",&value);
				insert_begin(value);
				display();
				break;
			}	
			
			case 2:{
			
				printf("enter the value:");
				scanf("%d",&value);
				insert_end(value);
				display();
				break;
				}
			
			case 3:{
			
				printf("enter the value:");
				scanf("%d",&value);
				printf("enter the position:");
				scanf("%d",&ele);
				insert_after_specified(value,ele);
				display();
				break;
				}
			
			case 4:{
			
				delete_begin();
				display();
				break;
				}
			
			
			case 5:{
			
				delete_end();
				display();
				break;
			}
			
			case 6:{
				
				printf("enter the position:");
				scanf("%d",&ele);
				delete_mid(ele);
				display();
				break;
			}	
			
			case 7:
			
				exit(0);
				
			}
		}

}				
				
	
			
		
			
		
		
		
		
		
		
		
		
		
