#include <stdio.h>

void main(){
	int i,j,k,l=0,c=2;

	for(i=1;i<=5;i++){
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i+l;k++){
			printf("%d",c-k);		
		}
		l++;
		c =c+2;
		printf("\n");
	}

}