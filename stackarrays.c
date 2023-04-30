#include<stdio.h>
#include<stdlib.h>

int stack[5],choice,n,top=-1,x,i;
void push(){

	if(top>=4){
	
		printf("Stack is full");
		//exit(0);
	}
	
	else{
	//printf("%d",n);
		printf("enter a value to be push:");
		scanf("%d",&x);
		//printf("%d",top);
		top=top+1;
		stack[top]=x;  //pushed element is made top which progressively reaches upto the value
	}
}

void pop(){

	if (top==-1){
	
		printf("stack is empty");
	}
	else
		top--;
		
}

void display(){

	for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
}

				

int main(){


	//printf("enter the size of stack:");
	//scanf("%d",&n);
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	
	
	do{
		switch(choice)
			{
				case 1:{
					push();
					display();
					break;
					}
				case 2:{
					pop();
					display();
					break;
					}
				case 3:{
					display();
					break;
					}
				case 4:{
					break;
					}
				default:
					printf("enter valid option!!");
					
			}
	printf("enter your option:");
	scanf("%d",&choice);
	}while(choice!=4);
	return 0;
}


