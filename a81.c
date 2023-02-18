#include <stdio.h>

void main(){
	int i,j,k;

	for(i=1;i<=3;i++){
		for(j=3-i;j>=1;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			if(i==3&&j-1==k)
				printf("--");
			else
				printf(" *");
		}	
		printf("\n");
	}

}