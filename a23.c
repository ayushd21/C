#include <stdio.h>

void main(){
	int i,j,l;

	for(i=5;i>=1;i--){
		l=5;
		for(j=1;j<=i;j++){
			printf("%c",64+l);
			l--;
		}
		printf("\n");
	}
}