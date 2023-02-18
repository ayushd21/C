#include <stdio.h>

void main(){
	int i,n,j;

	printf("enter n:");
	scanf("%d",&n);


	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((i>=2&&i<=n-1)&&(j>=2&&j<=n-1))
				printf("  ");
			else
				printf("*");
		}
		printf("\n");
	}

}