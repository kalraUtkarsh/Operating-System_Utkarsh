
#include<stdio.h>
#define INT_MAX 999
#define FLOAT_MAX 999.99
#define DOUBLE_MAX 99999
int main(){
	int a = INT_MAX;
	float b = FLOAT_MAX;
	double c = DOUBLE_MAX;
	printf("the values:");
	printf("%d\n %f\n %f\n", a,b,c);
	printf("the sizes:");
	printf("%ld\n %ld\n %ld\n", sizeof(a),sizeof(b),sizeof(c));
	
	return 0;
}
