#include <stdio.h>
#include <math.h>


void main(){
	int size=3;
	int i,j;

	for(i=size;i>=-size;i--){
		for(j=size;j>=abs(i);j--){
			printf("%d",j);
		}
		printf("\n");
	}

}