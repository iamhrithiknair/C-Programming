#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL,*ptr;

void Insertbegin(int x){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
    }
    
    ptr=head;
    //while loop is used to find the last node of the circular linked list which points to the head i.e. last node's next field points to head
    while(ptr->next!=head){ 
        ptr=ptr->next;
    }
    newnode->next=head;
    ptr->next=newnode;//connection of lastnode to ptr and then to head
    head=newnode;
    
}

void Insertend(int x){
    
     struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
    }
    ptr=head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    //next field of new node points to head and next field of ptr to newnode
    newnode->next=head;  
    ptr->next=newnode;
}

void Insertafter(int pos_value, int x){
    
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
    }
    
    ptr=head;
    while(ptr->data!=pos_value){
        ptr=ptr->next;
    }
    
    newnode->next=ptr->next;
    ptr->next=newnode;
}

void Deletebegin(){
    
    if(head==NULL){
        
        printf("deletion not possible");
    }
    
    ptr=head;
    head=head->next;
    ptr->next=NULL;
    free(ptr);
}

void Deleteend(){
    
    if(head==NULL){
        
        printf("deletion not possible");
    }
    ptr=head;
    struct node *p;
    while(ptr->next!=head){
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL; //so connection between second last node and last node is cut
    free(ptr);
}

void Deleteafter(int pos_val){
    
    if(head==NULL){
        
        printf("deletion not possible");
    }
    
    ptr=head;
    struct node *p;
    while(ptr->data!=pos_val){
        p=ptr;
        ptr=ptr->next;
        
    }
    
    
    p->next=ptr->next;
    free(ptr);
}

void display(){
    
    if(head==NULL){
        printf("list is empty");
    }
    ptr=head;
    while(ptr->next!=head){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d->", ptr->data); //to print the last element
}


int main(){
    
    int choice,x,ele;
    
    printf("1.Insert Begin\n");
	printf("2.Insert End\n");
	printf("3.Insert After\n");
	printf("4.Delete Begin\n");
	printf("5.Delete End\n");
	printf("6.Delete After\n");
	
	do{
	    
	    printf("enter choice\n:");
	    scanf("%d",&choice);
	    switch(choice){
	        
	        case 1:
	            
	               printf("enter the value:");
	               scanf("%d",&x);
	               Insertbegin(x);
	               display();
	               break;
	       
	       case 2:
	                
	               printf("enter the value:");
	               scanf("%d",&x);
	               Insertend(x);
	               display();
	               break;
	               
	       case 3:
	                
	               printf("enter the node value:");
	               scanf("%d",&ele);
	               printf("enter the value:");
	               scanf("%d",&x);
	               Insertafter(ele,x);
	               display();
	               break;
	               
          case 4:
                    Deletebegin();
                    display();
                    break;
                    
          case 5:
                    Deleteend();
                    display();
                    break;
                    
          case 6: 
                   printf("enter the node value:");
	               scanf("%d",&ele);
                   Deleteafter(ele);
                   display();
                   break;
                   
          case 7:
                   exit(0);
                    
        
	    }

	}
		  while(choice!=7);
}
