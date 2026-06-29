#include<stdio.h>

int main(){
	int student, apple;
	
	printf("Enter Student: ");
	scanf("%d",&student);
	
	printf("Enter Apple: ");
	scanf("%d",&apple);
	
	int devisionHS = student / apple;
	int devisionT = student - (int) (student / apple) * apple; 
	
	printf("%d\n",devisionHS);
	printf("%d",devisionT);
	return 0;
}