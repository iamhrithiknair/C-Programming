#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct Stack{
	int top;
	char items[100];
	}Stack;
	
void push(Stack *stack,char data){
	stack->items[++stack->top]=data;
	}
	
char pop(Stack *stack){
	if(stack->top==-1){
		return '\0';
		}
	return stack->items[stack->top--];
	}
	
int is_empty(Stack *stack){
	return stack->top==-1;  //checks if the top is empty or not
	}
	
char peek(Stack *stack){
	return stack->items[stack->top];   //returns top of the stack
	}
	
int is_operand(char c){
	return isalnum(c);         //used to check if the character is an operand
	}
	
int precedence(char c){
	if(c=='^'){
		return 3;
		}
	else if(c=='*' || c=='/'){
		return 2;
		}
	else if(c=='+' || c=='-'){
		return 1;
		}
	return 0;
	}
	
char *infix_to_postfix(char *infix){
	
	static char postfix[100];
	Stack stack;
	stack.top=-1;
	
	int i,j;
	for(i=0,j=0;infix[i]!='\0';i++){
		if(is_operand(infix[i])){
			postfix[j++]=infix[i];
			}
		else if(infix[i]=='('){
			push(&stack,infix[i]);
			}
		else if(infix[i]==')'){
			while(!is_empty(&stack) && peek(&stack)!='('){
				postfix[j++]=pop(&stack);
				}
			if(!is_empty(&stack) && peek(&stack)!='('){
				printf("invalid expression");
				}
			else{
				pop(&stack);
				}
			}
		else{
			while(!is_empty(&stack) && precedence(infix[i])<=precedence(peek(&stack))){      //operator
				postfix[j++]=pop(&stack);
				}
			push(&stack,infix[i]);  //pushing the current operator to stack
			
			}
		}
			while(!is_empty(&stack)){
				postfix[j++]=pop(&stack);
				}
				
			postfix[j]='\0';  //marking the end of the postfix expression
			
			return postfix;
		}
		
int main(){
	char infix[100];
	printf("enter the expression:");
	scanf("%s",infix);
	
	printf("infix expression: %s\n",infix);
	printf("postfix expression: %s\n",infix_to_postfix(infix));
	}
	
	
			
	
