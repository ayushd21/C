#include <stdio.h>

void main(){
	int i,j,l=1;

	for(i=5;i>=1;i--){
		//l=1;
		for(j=1;j<=i;j++){
			printf("%c",64+l);
		}
		printf("\n");
		l++;
	}
}