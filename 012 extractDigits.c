#include<stdio.h>

int main(){
	int keyWord;
	
	printf("Enter keyWord: ");
	scanf("%d",&keyWord);
	
	int unitsDigit = keyWord % 10;
	int dozens = keyWord / 10;
	
	printf("%d %d", unitsDigit, dozens);

	return 0;
}