#include<stdio.h>

int main (){
	int number1;
	
	printf("");
	scanf("%d",&number1);
	
	int sum = 0;
	while(number1 > 0){
		sum += number1 % 10; //take the last digit
		number1 /= 10; //remove the last digit
	}
    printf("%d",sum);
	return 0;
}

