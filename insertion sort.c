#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[], int length){

	int i,j;
	for(i=1;i<length;i++){
		int key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
			}
		arr[j+1]=key;
		}
	}
int main(){
	
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the elements:");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	
	insertion_sort(arr,n);
	printf("on sorting:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
}


		
