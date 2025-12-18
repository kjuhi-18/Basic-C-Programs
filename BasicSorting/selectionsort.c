#include<stdio.h>
void selectionSort(int arr[],int n);
int main(){
	int n,i;
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int arr[n];
	
	
	for(i=0;i<n;i++){
		printf("\nEnter the element[%d]: ",i+1);
		scanf("%d", &arr[i]);
	}
	selectionSort(arr,n);
	
	printf("\nSorted Array (Using Selection Sort): ");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
void selectionSort(int arr[], int n){
	int i=0,j=0,minIndex,temp;
	for(i=0;i<n-1;i++){
		minIndex=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
	temp=arr[i];
	arr[i]=arr[minIndex];
	arr[minIndex]=temp;
	}
}

