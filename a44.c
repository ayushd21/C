#include <stdio.h>
#include <math.h>


void main(){
	int i,j,k,l=0;

	for(i=1;i<=5;i++){
		for(j=5-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i+l;k++){
			printf("%c",65+abs(i-k));			
		}
		l++;
		printf("\n");
	}

}