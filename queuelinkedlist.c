#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
		struct node *next;
	};
struct node *front=NULL;
struct node *rear=NULL;
void Enqueue(int x){

	struct node *temp=malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	
	if(front==NULL && rear==NULL){
	
		front=rear=temp;
		return;
	}
	rear->next=temp; //pointing rear to temp
	rear=temp;

}

void Dequeue(){

	struct node *temp=front; //as we delete from front
	
	if (front==NULL){
	
		printf("queue is empty!");
		}
	else if(front==rear){
	
		front=rear=NULL;
		}
	else{
	
		front=front->next;
		}
	free(temp);
	
}

void display(){

	struct node *temp=front;
	
	while(temp!=NULL){
	
		printf("%d -->", temp->data);
		temp=temp->next;
		}
	}
	
int main(){

	int choice,x;
	while(1){
	
		printf("\n1. Enqueue\n");
		printf("\n2. Dequeue\n");
		printf("\n3. Display\n");
		printf("\n4. Exit\n");
		
		scanf("%d", &choice);
		
		switch(choice){
		
				case 1: 
					
						printf("enter the value to be enqueue");
						scanf("%d", &x);
						Enqueue(x);
						display();
						break;
						
				case 2:
				
						Dequeue();
						display();
						break;
						
				case 3:
				
						display();
						break;
						
				case 4:
				
						break;
						
				}
			}
	}		
		
	

