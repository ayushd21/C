#include <stdio.h>

void main(){
	int i,j,k;

	for(i=1;i<=5;i++){
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",i);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--){
		for(j=4-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf(" %d",i);
		}
		printf("\n");
	}
}