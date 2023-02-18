#include <stdio.h>

void main(){
	int i,j,n;

	printf("Enter VAlue of n:");
	scanf("%d,&n");
		

	for(i=1;i<=n;i++){
		for(j=1;j<=n+4;j++){
			if(j<=6-i||j>=4+i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

}