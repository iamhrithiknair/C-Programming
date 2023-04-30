#include<stdio.h>
#include<stdlib.h>

int x;
int queue[5],rear=-1,front=-1;

void enqueue(){

	if(rear==4){
		printf("queue overflow!");
		}
	else{
		
		if(front==-1)
			front=0;
			
		printf("enter value:");
		scanf("%d",&x);
		rear=rear+1;
		queue[rear]=x;  //pushed element will be rear
		
		}
	}
	
void dequeue(){
	
	if(front==-1 || front>rear){
	
		printf("queue underflow!");
		}
		
	else{
	
		front=front+1;
		}
	}
void display(){

	if(front==-1){
	
		printf("queue is empty!");
		}
		
	else{
	
		printf("queue is:");
		for(int i=front;i<=rear;i++){
			
			printf("%d-->",queue[i]);
			}
		printf("\n");
		}
	}
	
int main(){

	
	int choice;
	
	printf("\n1.Enqueue\n");
	printf("\n2.Dequeue\n");
	printf("\n3.Display\n");
	printf("\n4.Exit\n");
	
	do{
		switch(choice){
			
			case 1: 
				enqueue();
				display();
				break;
				
			case 2:
				dequeue();
				display();
				break;
				
			case 3:
				display();
				
			case 4:
			 	break;
			 	
			default:
				printf("enter a valid choice");
				}
				printf("enter your choice:");
				scanf("%d",&choice);
				}while(choice!=4);
				
			return 0;
			}
		
