#include <stdio.h>

void main(){
	int i,j,k=3;

	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",k);
		}
		k++;
		printf("\n");
	}
	k=5;
	for(i=3;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
}