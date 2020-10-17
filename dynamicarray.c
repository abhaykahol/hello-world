#include<stdio.h>
#include<stdlib.h>

int main(){
	int size=10;
	int *A,i;
	A=(int * )malloc(size*sizeof(int));
	printf("enter 10 elements into array");
	for(i=0;i<10;i++){
		scanf("%d",&A[i]);
	}
	
	printf("\nvalues in array are :\n");
	for(i=0;i<10;i++){
		printf("%d",A[i]);
	}
	
	
}
