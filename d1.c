#include <stdio.h>

void main(){
	int i,j,p=0,k;

	for(i=1;i<=5;i++){
		p=i+p;
		for(j=1;j<=i;j++){
			if(i%2!=0){
				p=0;
				printf("_%d",++p);
			}else{
				printf("-%d",p--);
			}
		}
		printf("\n");
	}
}