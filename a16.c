#include <stdio.h>

void main(){
	int i,j,l=1;

	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",l);
		}
		printf("\n");
		l++;
	}
}