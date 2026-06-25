#include<stdio.h>
#include<math.h>

int main() {
	int numberA, numberB;
	
	printf("");
	scanf("%d",&numberA);
	printf("");
	scanf("%d",&numberB);
	

    float divisionP = numberA / numberB;
    int divisionQ = numberA - (int) (numberA / numberB) * numberB;
    
    printf("%.0f\n",divisionP);
    printf("%d",divisionQ);
    

	return 0;
	
}