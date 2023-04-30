#include<stdio.h>  
#include<stdlib.h>  
void createNode(int);  
void search();  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;  
void main ()  
{  
    int choice,item,loc;  
    do   
    {  
        printf("\n1.Insert Node\n2.Search\n3.Exit\n4.Enter your choice:\n");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the element to insert:\n");  
            scanf("%d",&item);  
            createNode(item);  
            break;   
            case 2:  
            search();  
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease enter a valid choice.\n");  
        }  
 
    }while(choice != 3);  
}  
    void createNode(int item)  
    {  
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
            printf("\nNode inserted successfully!!\n");  
        }  
 
    }  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nThe list is Empty.\n");  
    }  
    else  
    {   
        printf("\nEnter the element to search:\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("Element found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
    }     
 
}




