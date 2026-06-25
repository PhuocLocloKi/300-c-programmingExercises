#include<stdio.h>
#include<math.h>

int main() {
	double number1;
	printf("");
	scanf("%lf",&number1);
	
	double decimal = 1 / number1;
	printf("%.5lf",decimal);
	return 0;
	
}