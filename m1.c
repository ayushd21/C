#include <stdio.h>

void main(){
	int i,j,n,k=0;

	printf("Enter N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i+k;j++){
			printf("%d",j);
		}	
		k++;
		printf("\n");
	}
	k=n-2;
	for(i=n-1;i>=1;i--){
		
		for(j=1;j<=i+k;j++){
			printf("%d",j);
		}
		k--;
		printf("\n");

	}
}