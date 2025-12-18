#include<stdio.h>
int binarySearch(int arr[],int n,int key);
int binarySearch(int arr[],int n,int key){
	int left=0,right=n-1;
	while(left<=right){
		int mid=left+(right-left)/2;
		if (arr[mid]==key){printf("Found");
		return 1;
		}
		if(arr[mid]<key){
			left=mid+1;
			
			
		}
		else{
			right=mid-1;
					}}printf("Not found");
					return 0;
			
	}
void bubblesort(int arr[],int n);
	void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int arr[100],n,key;
	printf("Enter the length of array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the [%d] element:",i+1);
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printf("Please enter the number you want to find:");
	scanf("%d",&key);
	binarySearch(arr,n,key);
		return 0;}
