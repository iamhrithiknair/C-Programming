#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int stack[100];
int top=-1;

void push(int item){
	stack[++top]=item;
	}

int pop(){
	if(top<0){
		printf("stack is empty");
		}
	else{
		return stack[top--];
		}
	}

int evaluate_postfix(char *exp){
	
	int i;
	int a,b;
	int result=0;
	for(i=0;i<strlen(exp);i++){
		if(isdigit(exp[i])){
			push(exp[i]-'0');
			}
		else{
			b=pop();
			a=pop();
			switch(exp[i]){
				case '+':
					result=a+b;
					break;
				
				case '-':
					result=a-b;
					break;
					
				case '*':
					result=a*b;
					break;
					
				case '/':
					result=a/b;
					break;
				default:
					printf("error:invalid operator");
					exit(1);
				}
			push(result);
		}
	}
	return pop();
}
		
int main(){
	
	char exp[100];
	int result;
	printf("enter postfix expression:");
	scanf("%s",exp);
	
	result=evaluate_postfix(exp);
	printf("result is: %d\n",result);
	
	}
