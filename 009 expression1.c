#include<stdio.h>
#include<math.h>

int main() {
	double numberA, numberB, numberC;
	
	printf("");
	scanf("%lf",&numberA);
	printf("");
	scanf("%lf",&numberB);
	
	printf("");
	scanf("%lf",&numberC);
	
	double expressionP1 = (21 * pow(numberA, 2) + 5 * pow(numberB, 2)) / (2009 * pow(numberC,2) + 15);
	double expressionQ1 = (sqrt(pow(numberA, 2) - 2 * numberB)) / (3 * pow(numberC, 2) + 4);
	
	printf("%.4lf\n",expressionP1);
	printf("%.4lf\n",expressionQ1);
	
	return 0;
	
}