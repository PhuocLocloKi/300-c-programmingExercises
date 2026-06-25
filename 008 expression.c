#include<stdio.h>
#include<math.h>

int main() {
	double numberA, numberB;
	
	printf("");
	scanf("%lf",&numberA);
	printf("");
	scanf("%lf",&numberB);
	
	double expressionP = 21 * numberA + 5 * numberB - 2009;
	double expressionQ = (21 * pow(numberA,2) - 5 * numberB) / (2009 * pow(numberB,2));
	double expressionR = (21 * numberA + 5 * pow(numberB,2)) / (2009 * numberB + 15);
	
	printf("%.0lf\n",expressionP);
	printf("%.4lf\n",expressionQ);
	printf("%.6lf\n",expressionR);
	
	return 0;
	
}