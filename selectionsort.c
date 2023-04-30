#include<stdio.h>
#include<stdio.h>

int main(){
	
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	
	int arr[n];
	int i,j;
	
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		}
		
	for(i=0;i<n-1;i++){
		int min_pos=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min_pos]){
				min_pos=j;
				}
			}
		int temp=arr[i];
		arr[i]=arr[min_pos];
		arr[min_pos]=temp;
	}
	
	printf("after sorting:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
		}
	printf("\n");
}

