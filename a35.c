#include <stdio.h>

void main(){
	int i,j,k,l=0;

	for(i=1;i<=5;i++){
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i+l;k++){
			printf("%d",i);		
		}
		l++;
		printf("\n");
	}

}