#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;
	struct node *left;
	struct node *right;
	};
	
struct node *newNode(int data){

	struct node *node=malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
	}
	
struct node *insert(struct node *node,int data){

	if(node==NULL)
		return newNode(data);
		
	if(data<node->data)
		node->left=insert(node->left,data);
		
	if(data>node->data)
		node->right=insert(node->right,data);
		
	return node;
	}
	
struct node *minValueNode(struct node *node){

	struct node *current=node;
	while(current->left!=NULL)
		current=current->left;        //this moves current to the leftmost node in binarytree//
		
	return current;
	}
	
struct node *deleteNode(struct node *root,int data){

	if(root==NULL)
		return root;
		
	if(data<root->data)
		root->left=deleteNode(root->left,data);
		
	else if(data>root->data)
		root->right=deleteNode(root->right,data);
		
	else{
		if(root->left==NULL){     //when node to be deleted has no left child//
			struct node *temp=root->right;
			free(root);
			
			return temp;
			}
			
		else if(root->right==NULL){      //when node to be deleted has no right child//
			struct node *temp=root->left;
			free(root);
			
			return temp;
			}
			
		struct node *temp=minValueNode(root->right);
		root->data=temp->data;
		root->right=deleteNode(root->right,temp->data);
		//this is done to ensure that bst property is maintained//
		}
		return root;
	}

void printTree(struct node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printTree(node->left);
 
    // Then print the data of node
    printf("%d ", node->data);
 
    // Now recur on right child
    printTree(node->right);
}

int main()
{
    // Create the root node of the binary search tree
    struct node *root = NULL;
    
    // Insert some values into the binary search tree
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    
    // Print the binary search tree
    printf("Binary Search Tree: \n");
    printTree(root);
    
    // Delete a node from the binary search tree
    root = deleteNode(root, 30);
    
    // Print the binary search tree after deleting a node
    printf("\n\nBinary Search Tree after deleting a node: \n");
    printTree(root);
    
    return 0;
}


