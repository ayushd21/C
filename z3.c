#include <stdio.h>

void main(){
	int i,n,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if((i==3&&j==2)||(i==4&&j==2)||(i==4&&j==3))
				printf("  ");
			else
				printf("* ");
		}
		printf("\n");
	}

}