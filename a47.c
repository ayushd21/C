#include <stdio.h>

void main(){
	int i,j,k,l=4;

	for(i=4;i>=1;i--){
		for(j=4-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<i+l;k++){
			printf("*");
		}
		l--;
		printf("\n");
	}
}