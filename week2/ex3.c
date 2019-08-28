#include<stdio.h>
int main(){
	int number;
	printf("please enter a number");
	scanf("%d",&number);
	int row, space, star;
	for(row=1;row<=number;row++){
		for(space=number-row;space>=1;space--){
			printf(" ");		
		}	
		for(star=1;star<=(2*row)-1;star++){
			printf("*");
		}
		printf("\n");
 
	}
return 0;
}
