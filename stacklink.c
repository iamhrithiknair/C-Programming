#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *next;
};

struct node *top=NULL;   //intialising top to NULL



int push(int value){

struct node *newnode;
newnode=malloc(sizeof(struct node));
newnode->data=value;

if (top==NULL){

	newnode->next=NULL;
}

else{

	newnode->next=top; //-->next pointer will point to the top so that newnode becomes top
}

	top=newnode;  //setting top=newnode always
	printf("node inserted!");
}

int pop(){

if (top==NULL){

	printf("\nStack is empty & deletion not possible\n");
	
}

else{

	struct node *temp=top; //temp will now point to the top which is the last entered element
	int temp_data=top->data; //temp's data will store the data stored at top
	top=top->next;  //this expression is to reach the first element in stack
	free(temp);  //this will free the memory earlier occupied by temp
	
return temp_data; // this will return the top->data
   }
}


void display(){

	if(top==NULL){
	
		printf("\nstack is empty\n");
	}
	
	else{
	
		struct node *temp=top;
		
		while(temp->next!=NULL){
		
			printf("%d-->",temp->data);
			temp=temp->next;
		}
		
		printf("%d-->NULL",temp->data);
  }
  
}
int main(){

int choice,value;

while(1){

	printf("\n1.Push\n");
	printf("\n2.Pop\n");
	printf("\n3.Display\n");
	printf("\n4.Exit\n");
	
	scanf("%d",&choice);
	
	switch(choice){
	
		case 1:{
			   printf("enter value to be inserted");
			   scanf("%d",&value);
			   
			   push(value);
			   
			   break;
			  }
			   
		case 2:{
			   pop();
			  
			   break;
			  }
			   
		case 3: 
		       display();
	           break;
	           
	    case 4: 
	    		break;
	    
	    }
	 }
}
	
	
