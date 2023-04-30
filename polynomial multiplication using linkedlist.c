#include<stdio.h>
#include<stdlib.h>

struct node{
    
    int coeff;
    int exp;
    struct node *next;
};

struct node *createterm(int coeff,int exp){
    
    struct node *newterm=malloc(sizeof(struct node));
    newterm->coeff=coeff;
    newterm->exp=exp;
    newterm->next=NULL;
    return newterm;
}

//function to add new term to the polynomial
void addterm(struct node **poly,int coeff, int exp){
    
    struct node *newterm=createterm(coeff,exp);
    if(*poly==NULL){
        *poly=newterm;
        return;
    }
    struct node *current=*poly;
    //traversing the last node
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newterm; //adding newterm to the end of the polynomial
}

//function to multiply
struct node *multiplypoly(struct node *poly1, struct node *poly2){
	
	struct node *result=NULL;
	struct node *current1=poly1;
	while(current1!=NULL){
		
		struct node *current2=poly2;
		while(current2!=NULL){
			int coefficient=current1->coeff * current2->coeff;
			int exponent=current1->exp + current2->exp;
			addterm(&result,coefficient,exponent);
			current2=current2->next;
			}
		current1=current1->next;
		}
		return result;
	}
	
void display(struct node *poly){

	struct node *current=poly;
	
	if(current==NULL){
		printf("0\n");
		return;
		}
	if(current->exp==0){
		printf("%d",current->coeff);  //if the exponent is zero then return only the value or coefficient
		}
	else{
		printf("%dx^%d",current->coeff,current->exp);
		}
	
	current=current->next;
	
	while(current!=NULL){
		
		if(current->exp==0){
			printf("+%d",current->coeff); //upcoming coefficient with zero degree of exponent
			}
		else{
			printf("+%dx^%d",current->coeff,current->exp);
			}
		current=current->next;
		}
		printf("\n");
	}
	
int main(){

	int n1,n2,coeff,exp;
	printf("enter the no of terms in the first polynomial:");
	scanf("%d",&n1);
	struct node *poly1=NULL;
	for(int i=0;i<n1;i++){
		
		printf("enter the coefficient and exponent of term %d:",i+1);
		scanf("%d %d",&coeff,&exp);
		addterm(&poly1,coeff,exp);
		}
		
	printf("enter the no of terms in the second polynomial:");
	scanf("%d",&n2);
	struct node *poly2=NULL;
	for(int i=0;i<n2;i++){
	
		printf("enter the coefficient and exponent of term %d:",i+1);
		scanf("%d %d",&coeff,&exp);
		addterm(&poly2,coeff,exp);
		}
		struct node *result = multiplypoly(poly1,poly2);
		printf("result:");
		display(result);
		free(poly1);
   	    free(poly2);
       free(result);
       }


