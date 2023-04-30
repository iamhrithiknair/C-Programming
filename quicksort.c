#include<stdio.h>
void quicksort(int arr[],int left,int right){

	int i=left, j=right;
	int temp;
	int pivot=arr[(left+right)/2];
	while(i<=j)
		while(arr[i]<pivot)
			i++;
		while(arr[i]>pivot)
			j--;
		
		if(i<=j){
		
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
			}
			
		}
	if(left<j)
		quicksort(arr,left,j);
	if(i<right)
		quicksort(arr,i,right)
	}
	
int main(){
	int left=0,right=n;
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	quicksort(arr,left.right);
	
	printf("array after sorting:");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
		}

}
	
			
