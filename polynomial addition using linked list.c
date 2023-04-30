#include<stdio.h>
#include<stdlib.h>

struct node{
	int coeff;
	int exp;
	struct node *next;
	};
	
struct node *insert(struct node *head,int coeff,int exp){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->coeff=coeff;
	newnode->exp=exp;
	newnode->next=NULL;
	
	
	if(head==NULL){
		head=newnode;
		return head;
		}
		
	struct node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
		}
	ptr->next=newnode;
	return head;

	}
	
struct node *polyadd(struct node *poly1, struct node *poly2){
	struct node *result=NULL;
	struct node *sum=NULL;
	
	if(poly1!=NULL && poly2==NULL){     //when either one polynomial is null or empty
		sum=poly1;
		return sum;
		}
	else if(poly2!=NULL && poly1==NULL){
		sum=poly2;
		return sum;
		}
		
	while(poly1!=NULL && poly2!=NULL){   //when both of them are not empty
		
		if(poly1->exp > poly2->exp){
			result=insert(result,poly1->coeff,poly1->exp);
			poly1=poly1->next;
			}
		
		else if(poly2->exp > poly1->exp){
			result=insert(result,poly2->coeff,poly1->exp);
			poly2=poly2->next;
			}
			
		else{
			result=insert(result,poly1->coeff+poly2->coeff,poly1->exp);
			poly1=poly1->next;
			poly2=poly2->next;
			}
		}
		
		//for remaining polynomials
		while(poly1!=NULL){
			result=insert(result,poly1->coeff,poly1->exp);
			poly1=poly1->next;
			}
			
		while(poly2!=NULL){
			result=insert(result,poly2->coeff,poly2->exp);
			poly2=poly2->next;
			}
		return result;
	}
	
void display(struct node *head){
	if(head==NULL){
		printf("polynomial is empty!");
		}
		
	while(head!=NULL){
		printf("%dx^%d",head->coeff,head->exp);
		if(head->next!=NULL && head->next->coeff >=0){
			printf("+");
			}
		head=head->next;
		}	
	printf("\n");
	}
	
int main(){
	int n1,n2,coeff,exp;
	
	printf("enter the no of terms in the first polynomial:");
	scanf("%d",&n1);
	
	struct node *poly1=NULL;
	for(int i=0;i<n1;i++){
		printf("enter the coefficient and the exponent of term %d:",i+1);
		scanf("%d %d",&coeff,&exp);
		poly1=insert(poly1,coeff,exp);
		}
		
	printf("enter the no of terms in the second polynomial:");
	scanf("%d",&n2);
	
	struct node *poly2=NULL;
	for(int i=0;i<n2;i++){
		printf("enter the coefficient and the exponent of term %d:",i+1);
		scanf("%d %d",&coeff,&exp);
		poly2=insert(poly2,coeff,exp);
		}
		
	struct node *result=polyadd(poly1,poly2);
	printf("the result is:");
	display(result);
	
}
	

