#include <stdio.h>

void main(){
	int i,j,l;

	for(i=5;i>=1;i--){
		l=5;
		for(j=1;j<=i;j++){
			printf("%d",l);
			l--;
		}
		printf("\n");
	}
}