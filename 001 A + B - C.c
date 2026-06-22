#include<stdio.h>

int main(){
    int number1, number2, number3;
    printf("");
    scanf("%d",&number1);
    printf("");
    scanf("%d",&number2);
    printf("");
    scanf("%d",&number3);
    
    int result = number1 + number2 - number3;
    printf("%d",result);
    return 0;   
}